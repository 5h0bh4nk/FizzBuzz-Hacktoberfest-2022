# Weirdly formatted while loop iterating over for loop to print the expected outcome. Variable armageddon.
# Author: @Hifumi-Sec

keywords = ['fizzbuzz', 'fizz', 'buzz']
fizzin = True
rangin = range(101)
three = 3
zero = 0
five = 5

# loopin fizzbuzz
while fizzin:
    for fizzbuzz in rangin:
        if fizzbuzz % three == zero and fizzbuzz % five == zero:
            print(keywords[0])
            continue
        elif fizzbuzz % three == zero:
            print(keywords[1])
            continue
        elif fizzbuzz % five == zero:
            print(keywords[2])
            continue
        print(fizzbuzz)
    break