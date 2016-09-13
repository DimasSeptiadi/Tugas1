void setup() {
  // put your setup code here, to run once:
  pinMode(8,1);
  pinMode(9,1);
  pinMode(10,1);
  pinMode(11,1);
  pinMode(A0,0);
  pinMode(A1,0);
  pinMode(A2,0);
  digitalWrite(A0,HIGH)
  
  
  digitalWrite(A0,HIGH);
  digitalWrite(A1,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead (A0)==LOW)
  {
  PORTB=0x00; 
  delay(500);
  PORTB=0x01; 
  delay(500);
  PORTB=0x02; 
  delay(500);
  PORTB=0x03; 
  delay(500);
  PORTB=0x04; 
  delay(500);
  PORTB=0x05; 
  delay(500);
  PORTB=0x06; 
  delay(500);
  PORTB=0x07; 
  delay(500);
  PORTB=0x08; 
  delay(500);
  PORTB=0x09; 
  delay(500);
  PORTB=0x0A; 
  delay(500);
  PORTB=0x0B; 
  delay(500);
  PORTB=0x0C; 
  delay(500);
  PORTB=0x0D; 
  delay(500);
  PORTB=0x0E; 
  delay(500);
  PORTB=0x0F; 
  delay(1000);
  }
  
  else (digitalRead (A1)==LOW);
{
  PORTB=0x0F;
  delay(500);
  PORTB=0x0E;
  delay(500);
  PORTB=0x0D;
  delay(500);
  PORTB=0x0C;
  delay(500);
  PORTB=0x0B;
  delay(500);
  PORTB=0x0A;
  delay(500);
  PORTB=0x09; 
  delay(500);
  PORTB=0x08;
  delay(500);
  PORTB=0x07; 
  delay(500);
  PORTB=0x06;
  delay(500);
  PORTB=0x05;
  delay(500);
  PORTB=0x04;
  delay(500);
  PORTB=0x03;
  delay(500);
  PORTB=0x02; 
  delay(500);
  PORTB=0x01; 
  delay(500);
  PORTB=0x00;
  delay(1000);
  
}
}







