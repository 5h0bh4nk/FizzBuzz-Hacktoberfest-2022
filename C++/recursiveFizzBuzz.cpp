//author @lokeshtejavath
//the roulette fizzbuzz

#include <iostream>
using namespace std;

int main(int argc, char **argv, int num = 0)
{
    if (num > 101)
    {
        main(argc, argv, 1);
    }
    else
    {
        if (num == 101)
            return 0;
        if (num % 15 == 0)
            cout << "FizzBuzz\n";
        else if (num % 5 == 0)
            cout << "Buzz\n";
        else if (num % 3 == 0)
            cout << "Fizz\n";
        else
            cout << num << "\n";
        main(argc, argv, num + 1);
    }
}
