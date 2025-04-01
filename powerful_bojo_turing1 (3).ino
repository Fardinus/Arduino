// C++ code
//
void setup()
{
  Serial.begin(9600);
  Serial.println("Enter an Char");
}

void loop()
{
 if (Serial.available() > 0){
  char inputChar = Serial.read(); 
   
  Serial.print("Character: ");
  Serial.println(inputChar);
  Serial.print("ASCII value: ");
  Serial.println((int)inputChar);
    delay(100);
  }
}