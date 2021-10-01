#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0 ; i < 100 ; i++){
        string str = "";
        if(i % 3 == 0){
            str += "Fizz";
        }
        if(i % 5 == 0){
            str += "Buzz";
        }
        if(str == ""){
            cout << i << '\n';
        }
        else {
            cout << str << '\n';
        }
    }
    return 0;
}