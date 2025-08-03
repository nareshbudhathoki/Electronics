//array in the arduino
//data to store 2,3,4,5,6
//An array is a collection of variables that are accessed with an index number.
//array define and value assigning

int arr1[5];
int arr[] = {2,3,4,5,6,7}; //if we dont define size then arduino will take it automatically

int array[4] = {1,2,3,4}; // here we define size 4 and store 4 vairables
char values[] = {'a','b','c'};
char val[5] = "abcd"; // here the size 5 cause char and string takes on null character at the end '\0'
char value2[] = "abcd";
//above are the examples and below is the program
//array index always start from the 0 index.
int array_values[6] = {1,2,3,4,5,6};
String str[] = {"hello", "world", "do", "you","like", "code", "?"};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print(array_values[2]); //extracting the value using the index
  Serial.print(str[3]);
}

void loop() {
  // put your main code here, to run repeatedly:

}
