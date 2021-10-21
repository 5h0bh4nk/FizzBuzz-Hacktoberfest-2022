# Another version of FizzBuzz in bash
# Author: @ackerman-mikasa

# declare an indexed array since order is important
declare -a words
words[3]=Fizz
words[5]=Buzz
for i in {1..100}; do
	output=""
	# iterate array indexes
	for index in "${!words[@]}"; do
		if (($i % $index == 0 )); then output+="${words[$index]}"; fi
	done  
	if [ -z $output ]; then output=$i; fi
	printf "%s\n" $output
done
