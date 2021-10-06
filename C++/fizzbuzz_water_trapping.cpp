// Trapping rainwater problem
// Author: @Anica8

#include <iostream>
#include <cmath>
using namespace std;


string getFizzWaterTrap(int arr[], int n)
{
	int res = 0;

	for(int i = 1; i < n - 1; i++)
	{
		int res = 0;

    	int fizzMax[n];
    	int buzzMax[n];

    	fizzMax[0] = arr[0];
    	for(int i = 1; i < n; i++)
    		fizzMax[i] = max(arr[i], fizzMax[i - 1]);


    	buzzMax[n - 1] = arr[n - 1];
    	for(int i = n - 2; i >= 0; i--)
    		buzzMax[i] = max(arr[i], buzzMax[i + 1]);

    	for(int i = 1; i < n - 1; i++)
    		res = res + (min(fizzMax[i], buzzMax[i]) - arr[i]);
    	if(res!=0)
    	return "Fizz "+std::to_string(res);
	}
    if(res!=0)
	return "Fizz "+std::to_string(res);
	else
	return "buzz";
}


int main() {
	
     int arr[] = {5, 0, 6, 2, 3}, n = 5;
     int arr2[]={1,2,3},n2=3;
     cout<<getFizzWaterTrap(arr, n)<<endl;
     cout<<getFizzWaterTrap(arr2, n2)<<endl;
    
}