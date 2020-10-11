// Digital pins 2-6 are being used
int pushButton = 2;
int LEDGreen = 3;
int LEDYellow = 4;
int LEDRed = 5;
int Buzzer = 6;
int buttonFlag = 0;
int i;


// the setup routine runs once when you press reset:
void setup() {
  //Set the pinmode for the digital pins in use
  pinMode(pushButton, INPUT);
  pinMode(LEDGreen, OUTPUT);
  pinMode(LEDYellow, OUTPUT);
  pinMode(LEDRed, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
 //Initial condition is to flash red light until button is pressed
 while (buttonFlag == 0) {
  
  digitalWrite(LEDRed, HIGH);//Turn the Red LED on
 
 for (i = 0; i <100; i++){    //Check button Status every 10ms
  if (digitalRead(pushButton) == 1){
    buttonFlag = 1;
  }
  delay(10);
  }
 
  digitalWrite(LEDRed, LOW);//Turn LED off
 
  for (i = 0; i <100; i++){     //Check button Status every 10ms
  if (digitalRead(pushButton) ==1){
    buttonFlag = 1;
  }
  delay(10);
  }
 }

  digitalWrite(LEDRed, HIGH);   //Turn on Red wait 12 sec
  delay(12000);
  
  digitalWrite(Buzzer, HIGH);   //Turn on buzzer wait 3 sec
  delay(3000);

  digitalWrite(Buzzer, LOW);    //Turn off red/buzzer
  digitalWrite(LEDRed, LOW);
  
  digitalWrite(LEDGreen, HIGH);  //Turn on green wait 12 sec
  delay(12000);

  digitalWrite(Buzzer, HIGH);   //Turn on buzzer wait 3 sec
  delay(3000);

  digitalWrite(LEDGreen, LOW);   //Turn off green turn on yellow
  digitalWrite(LEDYellow, HIGH);  //Buzzer stays on for yellow
  delay(3000);
  digitalWrite(Buzzer, LOW);    //Turn off buzzer then repeat
   
 }
 
