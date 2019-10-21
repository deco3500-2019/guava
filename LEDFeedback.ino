const int button1Pin = 2; //pin number for button 1
const int button2Pin = 3; //pin number for button 2
const int button3Pin = 4; //pin number for button 3
const int led1Pin = 10; //pin number for LED 1
const int led2Pin = 11; //pin number for LED 2
const int led3Pin = 12; //pin number for LED 3

int button1State = 0;
int button2State = 0;
int button3State = 0;

void setup() {
  // put your setup code here, to run once:
  //initialize LEDs as output 
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  //initialize buttons as input
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //read the state of the pushbutton value:
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);

  //check if the button is pressed
  //if so, the buttonState will be HIGH
  if (button1State == HIGH) {
    //toggle LED state
    digitalWrite(led1Pin, !digitalRead(led1Pin));
    //debounce:
    delay(150);
  }
  if (button2State == HIGH) {
    //toggle LED state
    digitalWrite(led2Pin, !digitalRead(led2Pin));
    //debounce:
    delay(150);
  }
  if (button3State == HIGH) {
    //toggle LED state
    digitalWrite(led3Pin, !digitalRead(led3Pin));
    //debounce:
    delay(150);
  }
  

}
