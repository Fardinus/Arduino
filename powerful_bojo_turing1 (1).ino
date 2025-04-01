// C++ code
//
void setup()
{
  Serial.begin(9600);
  Serial.println("Enter an Text");
}

void loop()
{
 if (Serial.available() > 0){
  String text = Serial.readString();
  Serial.print("You entered: ");
  Serial.println(text);
  }
}