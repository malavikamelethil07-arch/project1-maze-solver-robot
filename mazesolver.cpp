
#include <Servo.h>

Servo myServo;

long duration;
int distance;
int rightDist, leftDist;
#define speed 95
#define turnspeed 80



// Motor pins
#define IN1 8
#define IN2 9
#define IN3 6
#define IN4 7
#define ENA 3
#define ENB 11


// Ultrasonic pins
#define trig 4
#define echo 5

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);

  myServo.attach(10);
  myServo.write(90);   
  delay(500);
}

int getDistance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  return duration * 0.034 / 2;
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  distance = getDistance();
  delay(15);
  if (distance > 10) {
    moveForward();
    analogWrite(ENA,speed);
    analogWrite(ENB,speed);
  } 
  else {
    stopMotors();
    delay(300);
    moveBackward();
    analogWrite(ENA,50);
    analogWrite(ENB,50);
    delay(45);

    myServo.write(10);
    delay(500);
    rightDist = getDistance();

    myServo.write(170);
    delay(500);
    leftDist = getDistance();

    if (rightDist < leftDist) {
      turnRight();
      analogWrite(ENA,turnspeed);
      delay(140);
    } else {
      turnLeft();
      analogWrite(ENB,turnspeed);
      delay(140);
    }
    myServo.write(90);
    delay(500);
  }
}
