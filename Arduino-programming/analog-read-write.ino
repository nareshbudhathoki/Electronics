//Arduino program to take analog input and output

void setup(){
  Serial.begin(9600);
}

void loop(){
  int val =analogRead(A0); //gas sensor connected to the A0
  Serial.println(val); 
  delay(1000);

  //Analog write program to control the led ligh

  analogWrite(6, 20);
}