/*
  FizzBuzz on Arduino
  Author: @kazoni
 */

void setup() {
  Serial.begin(9600);
}

// Will run until stopped
void loop() {
for(int i=1; i<=100; i++){
   if(i % 15 == 0) {
     Serial.println("FizzBuzz");
   }
   else if (i % 5 == 0) {
     Serial.println("Buzz");
   }
   else if (i % 3 == 0) {
     Serial.println("Fizz");
   }
   else Serial.println(i);
}
  delay(1000);        // delay before next number for readability
}



