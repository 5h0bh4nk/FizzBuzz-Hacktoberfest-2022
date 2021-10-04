Enum.map(1..100, fn n ->
  cond do
    rem(n, 3) == 0 and rem(n, 5) == 0 -> "FizzBuzz"
    rem(n, 3) == 0 -> "Fizz"
    rem(n, 5) == 0 -> "Buzz"
    true -> n
  end
end)
|> Enum.each(&IO.puts(&1))
