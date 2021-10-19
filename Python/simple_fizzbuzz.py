#!usr/bin/python3
#simple fizzbuzz solution
# Author: @fr4nkl1n-1k3h

for num in range(101):
    if n%5 == 0 and n%3 == 0:
        print('fizzbuzz',num,end="/n")
    elif n%5 == 0:
        print('buzz',num,end=" ")
    elif n%3 == 0:
        print('fizz',num, end=" ")
    else:
        print(num, end=" ")

print("Simple fizzbuzz by Fr4nkl1n-1keh")
