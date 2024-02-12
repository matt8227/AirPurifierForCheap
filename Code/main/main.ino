//this is basically the state change example, modified to output a varying PWM signal. 

const int fanPin = 5;  

const int buttonPin = 2;  // the pin that the pushbutton is attached to
const int ledPin = 13;    // Use 13 for onboard LED,

int buttonState = 0;      // current state of the button
int lastButtonState = 0;  // previous state of the button

int fanSetting = 0;

//this array represents the various speeds the fan cicles through when pushing the button
//0 is off, while 255 is max speed. I experimented with values and set on these.
int fanSpeeds[5] = { 43, 80, 120, 160, 255 };


void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT_PULLUP);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(fanPin, OUTPUT);
  analogWrite(fanPin, fanSpeeds[0]);
  //Serial.begin(9600);
}


void loop() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == LOW) {
      // if the current state is HIGH then the button went from off to on:
      fanSetting++;
      if (fanSetting > 4) {
        fanSetting = 0;
      }
      analogWrite(fanPin, fanSpeeds[fanSetting]);
      //Serial.println(fanSpeeds[fanSetting]);

      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
}