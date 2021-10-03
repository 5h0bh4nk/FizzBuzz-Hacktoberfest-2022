#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <unordered_map>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <bitset>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <climits>

using namespace std;

map<int,string> mp;

void fizzbuzz(){
    for (int i=0;i<100;i++){
        int k=(i%15==0)?0:(i%3==0)?1:(i%5==0)?2:3;
            switch (k){
        case (0):
            cout<<mp[15]<<endl;
            break;
        case (1):
            cout<<mp[3]<<endl;
            break;
        case (2):
            cout<<mp[5]<<endl;
            break;
        default:
            cout<<i<<endl;
            }

    }
    return;
}

int main(){
    mp[3]="Fizz";
    mp[5]="Buzz";
    mp[15]="FizzBuzz";
    fizzbuzz();
    return 0;
}
