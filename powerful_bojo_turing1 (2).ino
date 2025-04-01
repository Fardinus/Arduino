// C++ code
//
int num1 = 0;  
int num2 = 0;  
int sum = 0;
void setup()
{
  Serial.begin(9600);
  Serial.println("Enter your first num: ");
  

}

void loop()
{
 if (Serial.available() > 0){
    num1 = Serial.parseInt();
   Serial.println("Enter your 2nd num: ");
 
 while (Serial.available() == 0) {
     
    }
    num2 = Serial.parseInt();

    sum = num1 + num2;

   
    Serial.print("The sum of the two integers is: ");
    Serial.println(sum);

    
    Serial.println("Enter the first integer:");
 }

    delay(100);
  
}