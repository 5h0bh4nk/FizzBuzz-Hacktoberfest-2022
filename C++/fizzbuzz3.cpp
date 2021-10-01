#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1 ; i <= 100 ; i++){
        cout << (i % 15 == 0 ? "FizzBuzz" : i % 3 == 0 ? "Fizz" : i % 5 == 0 ? "Buzz" : to_string(i)) << '\n';
    }
    return 0;
}