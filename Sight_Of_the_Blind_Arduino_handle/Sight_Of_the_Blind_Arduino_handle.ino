//SIGHT OF THE BLIND 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
}
int pin = 3;
void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()>0){
  pin = 3;
  while(pin<12)
  {
  int val = Serial.parseInt();
  //Serial.println(val);
  /*if(val>95)
  val=255;
  else 
  val=0;*/
  analogWrite(pin,val);
  pin = pin+1;
  }
  delay(100);
}
}
