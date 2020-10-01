//This code works the same but is more efficient as it consumes less memory 
// and is based upon port manipulation 

const int ledpin = 5; // setting the led pin to pin 5

void setup() {
 DDRD |= (1<<ledpin); // setting ledpin as output.
 

}

void loop() {
  PORTD |= (1<<ledpin); // setting led pin to high 
  delay(1000);
  PORTD &= ~(1<<ledpin); // setting led pin to low 
  delay(2000);

}
