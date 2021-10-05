'Code in VBScript
'Author : Sufiyan

For fb = 1 To 100
  If fb Mod 15 = 0 Then
		WScript.Echo "FizzBuzz"
  ElseIf fb Mod 3 = 0 Then
		WScript.Echo "Fizz"
  ElseIf fb Mod 5 = 0 Then
		WScript.Echo "Buzz"
	Else
    WScript.Echo fb
	End If
Next
