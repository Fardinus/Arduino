// C++ code
//
void setup()
{
  Serial.begin(9600);
  Serial.println("Enter an integer");
}

void loop()
{
 if (Serial.available() > 0){
  int num = Serial.parseInt();
  Serial.print("You entered: ");
  Serial.println(num);
  }
}