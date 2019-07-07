#include <Servo.h>
#include <Ultrasonic.h>
Ultrasonic ultrasonic(7,8); // (Trig PIN,Echo PIN)
Ultrasonic ultrasonic2(11,12); // (Trig PIN,Echo PIN)
Servo servo;

int distance;
int distance2;
void setup(){
  Serial.begin(9600);
 servo.attach(5);
pinMode(13, OUTPUT);

pinMode(9, OUTPUT);
servo.write(90);
digitalWrite(13, HIGH); 
digitalWrite(9, HIGH);
}
void loop(){
distance = ultrasonic.distanceRead(CM);
distance2 = ultrasonic2.distanceRead(CM);

if(distance <= 5)
  {
  servo.write(-90);              // tell servo to go to position in variable 'pos' 
     
digitalWrite(13, LOW); 
digitalWrite(9, LOW);
  } if(distance2 <= 5)
  {
  servo.write(90);              // tell servo to go to position in variable 'pos' 
     
digitalWrite(13, HIGH); 
digitalWrite(9, HIGH);

   }

   
}

  
  
  
  
