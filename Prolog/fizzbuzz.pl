/*
Author-Aastha Singh
FizzBuzz in PROLOG

*/
fizz3(X) :- 0 is mod(X, 3).
buzz5(X) :- 0 is mod(X, 5).

FizzBuzz(X) :- 
    (fizz3(X),buzz5(X))
    	-> write('FizzBuzz') 
    	; fizz3(X) 
    		-> write('Fizz') 
    		; buzz5(X) 
    			-> write('Buzz') 
    			; write(X).
loop(100).
loop(n) :-n>0, FizzBuzz(101-n), nl. 
S is n-1, loop(S).
