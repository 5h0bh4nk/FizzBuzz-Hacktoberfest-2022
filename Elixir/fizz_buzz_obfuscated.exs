Enum.reduce(
  1..100,
  {false, false},
  fn
    n, acc ->
      case acc do
        {true, true} -> "FizzBuzz"
        {true, false} -> "Fizz"
        {false, true} -> "Buzz"
        {false, false} -> "#{n}"
      end
      |> IO.puts()

      {rem(n + 1, 3) == 0, rem(n + 1, 5) == 0}
  end
)
