int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;

long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  pinMode(6, INPUT);
  pinMode(7, OUTPUT);

  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);

  Serial.begin(9600);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:   
  delayMicroseconds(50);
  //Controlling speed (0 = off and 255 = max speed):
  analogWrite(9, 67); //ENA pin
  analogWrite(10, 67); //ENB pin

  int sensorValue = digitalRead(11);
  //Serial.println(sensorValue);
  delay(1);

  int sensorValue2 = digitalRead(12);
  //Serial.println(sensorValue2);
  delay(1);

  //Controlling spin direction of motors:
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
 
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);

  digitalWrite(7, LOW);
  delayMicroseconds(2);
  digitalWrite(7, HIGH);
  delayMicroseconds(10);
  digitalWrite(7, LOW);
  duration = pulseIn(6, HIGH);
  //Serial.println("durrrrrr");
  //Serial.println(duration);
  distance = duration * 0.034 / 2;
  
  //Serial.print("Distance: ");
  //Serial.print(distance);
  //Serial.println(" cm");
  
  if(distance <= 15){
    Serial.println("distance less than 15");
   digitalWrite(motor1pin1, HIGH);
   digitalWrite(motor1pin2, LOW);
   
   digitalWrite(motor2pin1, HIGH);
   digitalWrite(motor2pin2, LOW);
   delay(500);
   
   digitalWrite(motor1pin1, LOW);
   digitalWrite(motor1pin2, HIGH);

   digitalWrite(motor2pin1, HIGH);
   digitalWrite(motor2pin2, LOW);
   delay(750);
  }

  if(sensorValue == 1 || sensorValue2 == 1){
    Serial.println("Sensor equals 1");
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
  
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);

    delay(500);
    
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
  
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
    delay(750);
  }
}
