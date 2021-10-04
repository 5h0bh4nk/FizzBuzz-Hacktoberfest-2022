0..100 |> Enum.map_every(3, fn _n -> "Fizz" end) |> Enum.map_every(5, fn _n -> "Buzz" end) |> Enum.map_every(15, fn _n -> "FizzBuzz" end) |> tl |> Enum.each(&(IO.puts(&1)))
