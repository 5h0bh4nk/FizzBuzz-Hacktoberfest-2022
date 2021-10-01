# Author: @Hifumi-Sec

for ($fizzbuzz = 1; $fizzbuzz -le 100; $fizzbuzz++) {
    if ($fizzbuzz % 3 -eq 0 -and $fizzbuzz % 5 -eq 0 ) {
        Write-Output "fizzbuzz"
    } elseif ($fizzbuzz % 3 -eq 0) {
        Write-Output "fizz"
    } elseif ($fizzbuzz % 5 -eq 0) {
        Write-Output "buzz"
    }
    Write-Output $fizzbuzz
}
