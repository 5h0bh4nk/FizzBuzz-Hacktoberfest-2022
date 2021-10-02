#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

vector<string> fizzBuzz(int n) {
    vector<string> ans(n);
    for(int i = 1;i <= n; i++) {
        ans[i - 1] = to_string(i);
    }
    for(int i = 2;i < n; i += 3) {
        ans[i] = "Fizz";
    }
    for(int i = 4;i < n; i += 5) {
        ans[i] = "Buzz";
    }
    return ans;
}

int main()
{
    int n = 100;
    vector<string> ans = fizzBuzz(n);
    
    for(int i=0; i<n; i++) cout<<ans[i]<<endl;
    
    return 0;
}
