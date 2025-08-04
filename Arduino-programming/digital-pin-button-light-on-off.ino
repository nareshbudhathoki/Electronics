//Digital input and ouput functions in the arduino programming
//pinMode()
//digitalWrite()
//digitalRead()
//analogRead()
//analogWrite()
//Serial.begin()
//Serial.print()
//Serial.println()
//delay(1000)
//millis()
//tone()
//noTone()
//random()
//sizeof()
//attachInterrupt()
//constrain(val, min, max)
//map(val, in_min, in_max, out_min, out_max)
//=============//

//Below is the code 

int pin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(12);
  Serial.println(val);
  digitalWrite(13, val);
}
