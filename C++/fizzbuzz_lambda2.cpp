#include <iostream>
using namespace std;

int main()
{
    auto three = [](int n) int{return !(n%3);};
    auto five = [](int n) int{return n%5?0:2;};

    for(int i=1;i<=100;i++)
    {
    	int sum=three(i)+five(i);
    	if(sum==3)
    		cout<<"FizzBuzz";
    	else
    		if(sum==1)
    			cout<<"Fizz";
    		else
    			if(sum==2)
    				cout<<"Buzz";
    			else
    				cout<<i;
    	cout<<endl;
    }
    
    return 0;
}
