const int buttonPin01 = 6;
const int buttonPin02 = 7;
int Pin1 = A0;
int Pin2 = A3;

int data1;
int data2;

void setup() {

  Serial.begin(9600);
  
  pinMode(buttonPin01, INPUT);
  pinMode(buttonPin02, INPUT);
  pinMode(Pin1, INPUT);
  pinMode(Pin2, INPUT);

  digitalWrite(buttonPin01, HIGH);
  digitalWrite(buttonPin02, HIGH);
}

void loop() {
  
  if(digitalRead(buttonPin01) == LOW){
    //Serial.print("L");
    Serial.write(1);
    Serial.flush();
    delay(20);
  }
  
  if(digitalRead(buttonPin02) == LOW){
    //Serial.print("R");
    Serial.write(2);
    Serial.flush();
    delay(20);
  }
  
  data1 = analogRead(Pin1);
  data2 = analogRead(Pin2);

  Serial.print(data2);
  Serial.print(",");
  Serial.println(data1);
  Serial.flush();
  delay(20);
}
