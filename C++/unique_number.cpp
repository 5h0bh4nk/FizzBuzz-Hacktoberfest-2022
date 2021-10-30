#include <bits/stdc++.h>
using namespace std;


// problem ---- unique number 2n + 1
// given a list of numbers where every numbers occurs twice except one , find the unique number ?
int main(){
      

      int n ;
      cin>> n; 
      int no , ans = 0 ;
       for(int i = 0 ; i < n ; i++){
           cin>>no;
           // bitwise operator to solve 
           // helped to not any storage 
           ans = ans ^ no ;
       }
       cout<< ans << " " ;

    return 0;
}