const int ledpin = 5; // setting the led pin to digital pin 5

void setup() {
 pinMode(ledpin,OUTPUT); // declaring ledpin as output 
 
 

}

void loop() {
  digitalWrite(ledpin,HIGH);  // setting led pin as high
  delay(1000);
  digitalWrite(ledpin,LOW);// setting led pin as low 
  delay(2000);
