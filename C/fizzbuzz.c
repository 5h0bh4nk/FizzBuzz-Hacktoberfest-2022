//Author: @lokeshtejavath
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#define Fizz 3
#define Buzz 5
#define FizzBuzz 15
#define Yea true
#define Nah False
#define also &&
char buff[10];
bool doesItBeat(int number, int beat)
{
    return number % beat == 0;
}
char *whichBeat(int number)
{
    char *beat = (char *)malloc(sizeof(char) * 9);
    if (doesItBeat(number, Fizz) also doesItBeat(number, Buzz))
    {

        beat = "FizzBuzz";
    }
    else if (doesItBeat(number, Fizz))
    {
        beat = "Fizz";
    }
    else if (doesItBeat(number, Buzz))
    {
        beat = "Buzz";
    }
    else
    {
        itoa(number, beat, 10);
    }
    return beat;
}
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%s\n", whichBeat(i));
    }
}