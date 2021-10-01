<?php
// Simple example of FizzBuzz inline with PHP 
// Author: @Tony133

for($i = 0; $i++ < 100;) echo [$i, 'Fizz', 'Buzz', 'FizzBuzz'][!($i % 3) + 2 * !($i % 5)], "\n";
