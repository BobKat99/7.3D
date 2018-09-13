void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() 
{
  digitalWrite(LED_BUILTIN, LOW);
  if (digitalRead(5) == HIGH or digitalRead(6) == HIGH or digitalRead(7) == HIGH) 
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else 
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(3000);
}
