//This is the basic programming for arduino
int led = 5;
void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH); // ON
  delay(100);             // wait 1s
  digitalWrite(led, LOW);  // OFF
  delay(100);             // wait 1s
}
