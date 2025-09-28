void setup() {
pinMode(7, OUTPUT); // 7번 핀을 출력으로 설정

}
void loop() {
digitalWrite(7, HIGH); // LED 켜기
delay(1000);           // 1초 대기
digitalWrite(7, LOW);  // LED 끄기
delay(1000);           // 1초 대기

int count = 0;
while(count<5) {
  digitalWrite(7, HIGH); // LED 켜기
  delay(100);           // 1초 대기
  digitalWrite(7, LOW);  // LED 끄기
  delay(100); // 1초 대기
  count++;

}
void loop() {
  digitalWrite(7, LOW); 
  while(false);
}
}

# 
