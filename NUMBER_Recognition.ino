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
  //Serial.print(thumb);
  //Serial.println(", ");
  //Serial.print(index);
  //Serial.print(", ");
  //Serial.print(middle);
  //Serial.print(", ");
  //Serial.print(ring);
  //Serial.print(", ");
  //Serial.println(pinky);
  delay(100);
  // turn on LEDs if sensor reading
  // exceeds a certain threshold

  //Number recognition
    if (thumb>100 && index == 0 && middle > 0 && ring > 0 && pinky > 0) {
    Serial.println("1");
  } else if (thumb>100 && index == 0 && middle == 0 && ring > 0 && pinky > 0) {
    Serial.println("2");
  } else if (thumb>100 && index == 0 && middle == 0 && ring == 0 && pinky > 0) {
    Serial.println("3");
  } else if (thumb<100 && index == 0 && middle == 0 && ring == 0 && pinky == 0) {
    Serial.println("4");
  } else if(thumb<100 && index != 0 && middle != 0 && ring != 0 && pinky != 0 ){
    Serial.println("6");
  } else if(thumb<100 && index == 0 && middle != 0 && ring != 0 && pinky != 0 ){
    Serial.println("7");
  } else if(thumb<100 && index == 0 && middle == 0 && ring != 0 && pinky != 0 ){
    Serial.println("8");
  }  else if(thumb<100 && index == 0 && middle == 0 && ring == 0 && pinky != 0 ){
    Serial.println("9");
  }
  
}