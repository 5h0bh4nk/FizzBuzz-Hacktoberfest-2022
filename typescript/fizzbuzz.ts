function beatit(num:number,beat:number):boolean {
    return (num % beat == 0);
}
function fizzbuzz(num: number): string {
    let beat = "";
    if (beatit(num, 3))
        beat += "Fizz";
    if (beatit(num, 5))
        beat += "Buzz";
    if (beat == "")
        return "Nah!!";
    else return beat;
}

function main() {
    for (let num = 1; num <= 100; num++){
        let rythm = fizzbuzz(num);
        if (rythm == "Nah!!")
            console.log(num);
        else
            console.log(rythm);
            
        
    }
}
main();