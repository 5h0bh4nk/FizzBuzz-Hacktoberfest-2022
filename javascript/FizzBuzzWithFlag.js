// Code for FizzBuzz using count & flag in Javascript 
// Author: @Aakash-Raj-2001

function fizzBuzz(N)
{
	let count3 = 0;
	let count5 = 0;
	let count15= 0;
        for (let i = 1; i <= 100; i++) {

		count3++;
        count5++;
        count15++;

		let flag = false;

		if (count3 == 3) {
			document.write("Fizz");

			count3 = 0;
			flag = true;
		}

		if (count5 == 5) {
			document.write("Buzz");

			count5 = 0;
			flag = true;
		}
		
		if(count15 == 15){
		    document.write("FizzBuzz");
		    
		    count15 =0;
		    flag = true;
		}

		if (!flag) {
			document.write(i);
		}

		document.write(" ");
	}
}


let N = 100;
fizzBuzz(N);




