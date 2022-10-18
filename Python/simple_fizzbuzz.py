#!usr/bin/python3
#simple fizzbuzz solution
# Author: @fr4nkl1n-1k3h

for num in range(101):
    if num%5 == 0 and num%3 == 0:
        print('fizzbuzz',num,end="/n")
    elif num%5 == 0:
        print('buzz',num,end="/n")
    elif num%3 == 0:
        print('fizz',num, end="/n")
    else:
        print(num, end=" ")

print("Simple fizzbuzz by Fr4nkl1n-1keh")
