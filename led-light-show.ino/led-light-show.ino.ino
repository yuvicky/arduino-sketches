void setup() {
  //set up a pin for each "note" of twinkle twinkle little star
  pinMode(4, OUTPUT); //first note "twinkle"
  pinMode(7, OUTPUT); //second note "twinkle"
  pinMode(12, OUTPUT); //third note "little"
  pinMode(13, OUTPUT); //fourth note "star"
}

void loop() {

  //let's set up an array for our pattern
  //which pins (which LEDs) to turn on in sequence
  int pattern[] = {4, 7, 12, 13};

  //loop through the ENTIRE pattern
  for (int count = 0; count < 5; count++) {
    //pattern[count] gives me the note in the
    //pattern that I've counted up to by now
    digitalWrite(pattern[count], HIGH); //turn this light on
    delay(50);
    digitalWrite(pattern[count], LOW); //turn this light off
    delay(50); 
  }

digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(7, HIGH);
digitalWrite(12, HIGH); 
digitalWrite(13, HIGH);  

  int pattern2[] = {13, 12, 7, 4};

  //loop through the ENTIRE pattern
  for (int count = 0; count < 5; count++) {
    //pattern[count] gives me the note in the
    //pattern that I've counted up to by now
    digitalWrite(pattern2[count], HIGH); //turn this light on
    delay(50);
    digitalWrite(pattern2[count], LOW); //turn this light off
    delay(50); 
  }
}

