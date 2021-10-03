#include <iostream>
using namespace std;

int main()
{
    auto three = [](int n) bool{return !(n%3);};
    auto five = [](int n) bool{return !(n%5);};

    for(int i=1;i<=100;i++)
    {
    	if(three(i)&&five(i))
    		cout<<"FizzBuzz";
    	else
    		if(three(i))
    			cout<<"Fizz";
    		else
    			if(five(i))
    				cout<<"Buzz";
    			else
    				cout<<i;
    	cout<<endl;
    }
    
    return 0;
}
