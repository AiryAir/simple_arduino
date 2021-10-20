int a;
String b1 = "Please enter your number: ";
String b2 = "Your number is: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   Serial.setTimeout(100);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(b1);
while (Serial.available()==0){
  }

a = Serial.parseInt();
Serial.print(b2);
Serial.println(a);
delay(10);
  
}
