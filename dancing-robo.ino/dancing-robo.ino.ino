#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left and right servos
Servo servoRight;

void setup() {
//
//  pinMode(1, OUTPUT); //red
//  pinMode(3, OUTPUT);  //blue
//  pinMode(5, OUTPUT);  //red
//  pinMode(7, OUTPUT);  //blue
//  pinMode(9, OUTPUT); //red
//  pinMode(11, OUTPUT); //blue
// 
// 
// tone(4, 3000, 1000);                       // Play tone for 1 second
//  delay(1000);                               // Delay to finish tone
//
//
//}
//
//
  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
}
//
//void allred() {
//  int mypins[] = {1, 5, 9};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins[count], HIGH);  
//  }
//}
//
//void offred() {
//  int mypins2[] = {1, 5, 9};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins2[count], LOW);   
//  }
//
//}
//
//void allon() {
//  int mypins[] = {1, 5, 9};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins[count], HIGH);  
//     }
//  int mypins2[] = {3, 7, 11};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins2[count], HIGH);    
//     }     
//  }
//
//void alloff() {
//  int mypins[] = {1, 5, 9};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins[count], LOW);  
//     }
//  int mypins2[] = {3, 7, 11};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins2[count], LOW);    
//     }     
//  }
//
//
//void allblue() {
//  int mypins3[] = {3, 7, 11};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins3[count], HIGH);   
//  }
//}
//void offblue() {
//  int mypins4[] = {3, 7, 11};
//     for (int count = 0; count < 3; count++) {
//       digitalWrite(mypins4[count], LOW);   
//  }
//}
void spin_right(int time)
{ servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}
void spin_left(int time)
  { servoLeft.writeMicroseconds(1300);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}
void forward(int time)                     // Forward function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(time);                               // Maneuver for time ms
}

void backward(int time)                      // Backward function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}

//void detached() {
//  servoLeft.detach();                        // Stop sending servo signals
//  servoRight.detach(); 
//}


void loop(){
// attaching();
//  allred();
//  delay(500);
//  offred();
//  delay(100);
//  allblue();
//  delay(500);
//  offblue();
//    delay(100);
  spin_right(2900);
  spin_left(2500);
  forward(1000);
  backward(1000);
  //forward(3000);
 // detached();
//  allon();
//  delay(700);
//  alloff();
  
}


// // Turn left in place
//  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
//  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
//  delay(600);                                // ...for 0.6 seconds
//
//  // Turn right in place
//  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
//  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
//  delay(600); 
