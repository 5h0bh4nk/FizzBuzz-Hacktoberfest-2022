#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt3 = 0 , cnt5 = 0;
    string str = "";
    for(int i = 1 ; i <= 100 ; i++){
        cnt3++;
        cnt5++;
        str = "";
        if(cnt3 == 3) { str += "Fizz"; cnt3 = 0; }
        if(cnt5 == 5) { str += "Buzz"; cnt5 = 0; }
        if(str == ""){
            cout << i << '\n';
        }
        else {
            cout << str << '\n';
        }
    }

    return 0;
}