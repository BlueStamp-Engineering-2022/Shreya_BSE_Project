int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);

  Serial.begin(9600);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:   

  //Controlling speed (0 = off and 255 = max speed):
  analogWrite(9, 75); //ENA pin
  analogWrite(10, 75); //ENB pin

  int sensorValue = digitalRead(11);
  Serial.println(sensorValue);
  delay(1);

  int sensorValue2 = digitalRead(12);
  Serial.println(sensorValue2);
  delay(1);

  int sensorValue3 = digitalRead(13);
  Serial.println(sensorValue3);
  delay(1);

  //Controlling spin direction of motors:
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
 
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);

  if(sensorValue == 1 || sensorValue2 == 1){
    delay(150);
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
  
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
    delay(1000);
    
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
  
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
    delay(500);
    
    if(sensorValue3){
      delay(150);
      digitalWrite(motor1pin1, LOW);
      digitalWrite(motor1pin2, HIGH);
    
      digitalWrite(motor2pin1, LOW);
      digitalWrite(motor2pin2, HIGH);
      delay(1000);
      
      digitalWrite(motor1pin1, LOW);
      digitalWrite(motor1pin2, HIGH);
    
      digitalWrite(motor2pin1, HIGH);
      digitalWrite(motor2pin2, LOW);
      delay(500);
    }
  }
}
