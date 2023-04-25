void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  int analog_deger = analogRead(A0);
  Serial.println(analog_deger);
//0-1023 arasi deger doner burda
//okunan deger azalinca lamba sonecek sekilde tasarlandi
  if(analog_deger <1023 && analog_deger > 1000){  //Işık şiddeti artarsa LDR üzerindeki direnç azalır
    digitalWrite(2,1);    //Işık şiddeti azalırsa LDR üzerindeki direnç artar
  }else{
    digitalWrite(2,0);    
  }
  delay(500);
}
