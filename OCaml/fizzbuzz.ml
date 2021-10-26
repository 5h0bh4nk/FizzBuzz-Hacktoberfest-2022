let fizzbuzz x = 
  if x mod 3 = 0 then 
    if x mod 5 = 0 then
      print_string ("fizzbuzz")let fizzbuzztest x = 
  if x mod 3 = 0 then 
    if x mod 5 = 0 then
      print_string ("fizzbuzz")
    else
        print_string ("fizz")
  else
    if x mod 5 = 0 then
      print_string ("buzz")
    else
      print_int x ; 
  print_newline () ;;

let rec counter n =
  match n with
    0 -> () 
    | _ -> counter (n - 1) ; 
           fizzbuzz n ;;

counter_fizzbuzz 100