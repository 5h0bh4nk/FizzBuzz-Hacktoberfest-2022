// Author : Utsav Ramchandra Khatu
// FizzBuzz Completion
// Desc : Every Number wants to be FizzBuzz Number but all numbers are lazy
// so they want the minimum no. of moves to become a FizzBuzz Number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;
    if (n <= 15)
        cout << 15-n << endl;
    else
    {
        x = 15 * (n / 15);
        y = 15 * (n / 15 + 1);
        cout << min(n - x, y - n) << endl;
    }
}
