// www.sciencebuddies.org

// declare variables
int sensorpin = A0;  // sensor pin
int sensor;          // sensor readings
// LED pins


void setup() {
  // put your setup code here, to run once:
  // set LED pins as outputs

  // initialize serial communication
  Serial.begin(9600);
  Serial.println("Starting:\n\n\n");
}
void loop() {
  // put your main code here, to run repeatedly:
  // read sensor value
  int thumb = analogRead(A0);
  int index = analogRead(A1);
  int middle = analogRead(A2);
  int ring = analogRead(A3);
  int pinky = analogRead(A4);
  // print sensor value
  Serial.print(thumb);
  Serial.print(", ");
  Serial.print(index);
  Serial.print(", ");
  Serial.print(middle);
  Serial.print(", ");
  Serial.print(ring);
  Serial.print(", ");
  Serial.println(pinky);
  //delay(900);
  // turn on LEDs if sensor reading
  // exceeds a certain threshold
}
