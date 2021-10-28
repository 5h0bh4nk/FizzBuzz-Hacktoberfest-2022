// simple fizzbuzz in delphi
// Author: @augustoscher
// Hactoberfest 2021

procedure FizzBuzz;
var
  i:Integer;
begin
  for i := 1 to 100 do
  begin
    case i mod 15 of
      3, 6, 9, 12:
        WriteLn('Fizz');
      5, 10:
        WriteLn('Buzz');
      0:
        WriteLn('FizzBuzz');
      else
        WriteLn(IntToStr(i));
    end;
  end;
end;
