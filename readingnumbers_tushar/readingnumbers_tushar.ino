void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.setTimeout(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){}
  String a = Serial.readString();
  int b = a.toInt();
  Serial.println(b);

}
