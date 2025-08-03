//Text variable in the arduino
char name = 'A';
char val = 65;
String lastname = "\n Hello \n world";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print(val);
  Serial.print(lastname);
}

void loop() {
  // put your main code here, to run repeatedly:

}
