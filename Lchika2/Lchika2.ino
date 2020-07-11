//
// D3-D8 port に接続したLEDを1秒毎に点灯させていく
// delay()関数版
// 

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  char c=0;

  for(c=3;c<=8;c++){
   digitalWrite(c, HIGH);
   delay(1000);
  }

  for(c=3;c<=8;c++){
   digitalWrite(c, LOW);
   delay(1000);
  }


}
