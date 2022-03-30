//Code by:-Yazish khan

// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int output = 11;
const int ledPin = 13;
                            
// defines variables
long duration;
int distance;
int safetyDistance;
 
            
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(output, OUTPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
 
 
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
 
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
 
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
 
// Calculating the distance
distance= duration*0.034/2;
 
safetyDistance = distance;
if (safetyDistance <= 10
)   // You can change safe distance from here changing value Ex. 20 , 40 , 60 , 80 , 100, all in cm

{
  digitalWrite(output, LOW);
  digitalWrite(ledPin, LOW);
}
else{
  digitalWrite, (output,HIGH);
  digitalWrite(ledPin, HIGH);
}
 
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}    //code by:- yazish khan
