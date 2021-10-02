void main() {
  for (var i = 1; i <= 100; i++)
  {
    if(i%3==0 || i%5==0)
    {
      if (i%3==0 && i%5==0)
        print("fizzbuzz");
      else if(i%3==0)
      print("fizz");
    else if(i%5==0)
      print("buzz");
    }
    else print(i);
  }
}
