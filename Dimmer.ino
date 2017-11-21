//Variables for LEDs
#define RED 10 //# for arduino port
#define GREEN 11
//Variables for Buttons
#define B1 4
#define B2 5
void setup() {
  // put your setup code here, to run once:
//Light is a type of output
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
Serial.begin(9600);
//Buttons require input
pinMode(B1, INPUT);
pinMode(B2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int joystick;
int red, green;
joystick = analogRead(A0);
if (joystick > 512) {
  green =map(joystick, 512, 1024, 0, 255);
  red=0;
}
else {
  red = map(joystick, 0, 510, 255, 0);
  red = -1 * red;
  green = 0;
}
analogWrite(RED, red);
analogWrite(GREEN, green);
Serial.println(joystick); 
digitalWrite(11, digitalRead(5));
digitalWrite(10, digitalRead(4)); 
}
