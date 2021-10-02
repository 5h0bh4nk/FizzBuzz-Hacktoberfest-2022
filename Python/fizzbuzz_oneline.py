// Python3 FizzBuzz - Oneliner solution
// Author: @aqc1

print(''.join([ "FizzBuzz\n" if num % 0x0F == 0 else "Fizz\n" if num % 0b011 == 0 else "Buzz\n" if num % 0o05 == 0 else f"{str(num)}\n" for num in range(1, 101) ]))
