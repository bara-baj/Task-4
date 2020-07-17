int button1 =  12;
int button2 =  13;
void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(2, OUTPUT);
digitalWrite(2, LOW);
digitalWrite(7, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(button1)==true&&digitalRead(button2)==false){
 digitalWrite(2, HIGH);
 digitalWrite(7, HIGH);
  }
 if (digitalRead(button1)==false&&digitalRead(button2)==true){
 digitalWrite(2, HIGH);
 digitalWrite(7, LOW);
  }
  if (digitalRead(button1)==false&&digitalRead(button2)==false){
 digitalWrite(2, LOW);
 digitalWrite(7, LOW);
  }
  if (digitalRead(button1)==true&&digitalRead(button2)==true){
 digitalWrite(2, LOW);
 digitalWrite(7, LOW);
  }
  
}
