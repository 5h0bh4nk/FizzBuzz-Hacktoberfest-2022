#include <iostream>
#include <vector>
using namespace std;

vector<int> base_k(int n, int k){
    vector<int> ret;
    while(n>=k){
        ret.push_back(n%k);
        n/=10;
    }
    ret.push_back(n);
    return ret;
}

int main(){
    for(int i = 0; i<100; i++){
        vector<int> temp;
        temp = base_k(i, 15);
        if(temp[0]==0){
            cout<<"FizzBuzz\n";
            continue;
        }
        temp = base_k(i, 5);
        if(temp[0]==0){
            cout<<"Buzz\n";
            continue;
        }
        temp = base_k(i, 3);
        if(temp[0]==0){
            cout<<"Fizz\n";
            continue;
        }
        cout<<i<<endl;
    }
}