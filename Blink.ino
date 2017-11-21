
  // the setup function runs oncewhen you press reset or power on the board
void setup() 
{// initialize digital pin LED_BUILTIN as an out put
pinMode(10, OUTPUT);
pinMode(5, INPUT);
pinMode(11, OUTPUT);
pinMode(4, INPUT);

}

void loop() {
digitalWrite(11, digitalRead(5));
digitalWrite(10, digitalRead(4));
}
