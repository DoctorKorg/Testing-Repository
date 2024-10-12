void setup(){
  pinMode(13,OUTPUT); //a
  pinMode(12,OUTPUT); //b
  pinMode(11,OUTPUT); //c
  pinMode(10,OUTPUT); //d
  pinMode(9,OUTPUT); //e
  pinMode(8,OUTPUT); //f
  pinMode(7,OUTPUT); //g
  Serial.begin(9600);
}
void loop(){
  digitalWrite(12,HIGH); //0
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  Serial.println("0");
  delay(1000);

  digitalWrite(12,HIGH); //1
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  Serial.println("1");
  delay(1000);

  digitalWrite(13,HIGH); //2
  digitalWrite(12,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(11,LOW);
  Serial.println("2");
  delay(1000);
  
  digitalWrite(13,HIGH); //3
  digitalWrite(12,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  Serial.println("3");
  delay(1000);

  digitalWrite(8,HIGH); //4
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(13,LOW);
  Serial.println("4");
  delay(1000);

  digitalWrite(13,HIGH); //5
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);
  Serial.println("5");
  delay(1000);

  digitalWrite(13,HIGH); //6
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(12,LOW);
  Serial.println("6");
  delay(1000);

  digitalWrite(13,HIGH); //7
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  Serial.println("7");
  delay(1000);

  while(true);

  /*digitalWrite(7,HIGH); //8
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  Serial.println("8");
  delay(1000);

  digitalWrite(7,HIGH); //9
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  Serial.println("9");
  delay(1000);*/


}