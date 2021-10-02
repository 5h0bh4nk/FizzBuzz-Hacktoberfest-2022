#include <bits/stdc++.h>
using namespace std;

int sumOfDigits (int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

bool divisibleByThree (int n) {
  return (sumOfDigits(n) / 3) * 3 == sumOfDigits(n);
}

bool divisibleByFive (int n) {
  int lastDigit = n % 10;
  return lastDigit == 0 || lastDigit == 5;
}

void FizzBuzz (int n) {
  int i = 1;
  while (i <= n) {
    string str = "";
    if (divisibleByThree(i)) {
      str += "Fizz";
    }
    if (divisibleByFive(i)) {
      str += "Buzz";
    }
    if (str == "") {
      str = to_string(i);
    }
    cout << str << endl;
    str = "";
    ++i;
  }
}
