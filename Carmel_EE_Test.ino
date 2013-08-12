/*
   Blink
   Turns on an motorA on for one second, then off for one second, repeatedly.

   This example code is in the public domain.
 */
/*
#typedey enum {
#define DIR_N
#define DIR_E
#define DIR_
#define DIR_W
#define DIR_
#define DIR_
#define DIR_W
#}
*/

int motorA = 22;
int motorB = 24;
int motorC = 26;
int motorD = 28;

bool CLOCK_WISE = true;
bool COUNTER_CLOCK_WISE = false;

//Declare Functions

void moveMotor( int motor, bool dir);
void moveTo( int motor, bool dir);
void motorStop(int motor){
  digitalWrite(motor, LOW);
  digitalWrite(motor+1, LOW);
}

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(motorA, OUTPUT);     //set up motor Yellow Signal Line
  pinMode(motorB, OUTPUT);     
  pinMode(motorC, OUTPUT);     
  pinMode(motorD, OUTPUT);     
  pinMode(motorA+1, OUTPUT);    //set up motor Brown Signal Line 
  pinMode(motorB+1, OUTPUT);     
  pinMode(motorC+1, OUTPUT);     
  pinMode(motorD+1, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  moveMotor(motorA, CLOCK_WISE);
  moveMotor(motorB, CLOCK_WISE);
  moveMotor(motorC, CLOCK_WISE);
  moveMotor(motorD, CLOCK_WISE);
  delay(1000);
  motorStop(motorA);
  motorStop(motorB);
  motorStop(motorC);
  motorStop(motorD);
  delay(1000);
  moveMotor(motorA, COUNTER_CLOCK_WISE);
  moveMotor(motorB, COUNTER_CLOCK_WISE);
  moveMotor(motorC, COUNTER_CLOCK_WISE);
  moveMotor(motorD, COUNTER_CLOCK_WISE);
  delay(1000);
}

void moveMotor( int motor, bool dir){
  digitalWrite(motor, dir);
  digitalWrite(motor, !dir);
}


