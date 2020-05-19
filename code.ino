
void setup()
{
  pinMode(2, INPUT); //connected to PIR sensor Signal pin
  pinMode(13, OUTPUT); //connected to led anode
  pinMode(12, OUTPUT); //connected to positive pin of motor1
  pinMode(10, OUTPUT); //connected to positive pin of motor2
  Serial.begin(9600); 
}
void loop()
{
  //if pir sensor pin 2 is HIGH(detects food packet),make lead pin 13 HIGH, make motors pins 13 and 12 HIGH to move motors
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    Serial.println("Food Packet Detected!");
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
  }
  delay(5); 
}