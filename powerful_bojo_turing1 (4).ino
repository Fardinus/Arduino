//C++
const int potPin = A0;  
const float referenceVoltage = 5.0; 

void setup() {
  Serial.begin(9600); 
}

void loop() {
 
  int inValue = analogRead(potPin);

  
  float voltage = (inValue / 1023.0) * referenceVoltage;

 
  Serial.print("in Value: ");
  Serial.print(inValue);
  Serial.print(" Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(100); 
}