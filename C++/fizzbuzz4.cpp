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
#include <iterator>
#include <climits>

using namespace std;

void fizzbuzz(){
    for (int i=0;i<=2021;i++){
        if ((i&(i-1))==0)
            cout<<"FizzBuzz "<<i<<"\n";
    }
    return;
}

int main(){
    fizzbuzz();
    return 0;
}
