
library(tidyverse)

fbnums <- 1:50

fbmap <- function(input, mod1, mod2, exp1, exp2) {
  output <- ""
  
  if (input %% mod1 == 0) {output <- paste0(output, exp1)}
  if (input %% mod2 == 0) {output <- paste0(output, exp2)}
  if (output == "") {output <- as.character(input)}
  
  return(output)
}

output <- map_chr(fbnums, ~ fbmap(.x, 3, 5, "Fizz", "Buzz"))
print(output)