# Fizzbuzz written in the TCL language
# Author: @saiveer-singh

for {set i 1} {$i <= 100} {incr i} {
    if {$i % 15 == 0} {
        puts "fizzbuzz"
    } elseif {$i % 5 == 0} {
        puts "buzz"
    } elseif {$i % 3 == 0} {
        puts "fizz"
    } else {
        puts $i
    } 
}
