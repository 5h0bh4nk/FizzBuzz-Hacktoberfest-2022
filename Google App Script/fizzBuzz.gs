// How to install / run
/**
 * 1. Open/Create New Google Sheet
 * 2. Select the menu item Tools > Script editor. 
 * 3. Copy paste the bellow code
 * 4. When you Refresh/Open google sheet it will print result
 * 5. or you can use custom function =fizzBuzz(anyNumber)
 */

function onOpen(e) {
  fizzBuzzOnSheetOpen()
}

function fizzBuzzOnSheetOpen() {
 let sheet = SpreadsheetApp.getActiveSheet()
  sheet.getRange('C1').setValue('wait...')
  sheet.getRange("A:C").clearContent()
  for(let row = 1; row<100; row++){
    let str = row
    if (row % 15 == 0) str = "FizzBuzz"
    if (row % 3 == 0) str = "Fizz"
    if (row % 5 == 0) str = "Buzz"
    sheet.getRange('B'+row).setValue(str)
  }
  sheet.getRange('C1').setValue('Done')
}


// Custom function for this Google Sheet thats return fizzBuzz output for 
function fizzBuzz(num) {    
    if (num % 15 == 0) num = "FizzBuzz"
    if (num % 3 == 0) num = "Fizz"
    if (num % 5 == 0) num = "Buzz"
    return num
}