/*
 Author: Tam Doan
 Description: This code counts up binary displayed by an LED. The code takes in data from a nearby phone that recieves sends data through the bluetooth. The data
 is then sent tot he HCO5 connected to the arduino. The HCO5 sends the data to the code to be used. The code is the majority of the project, but another important part
 of the project is configuring the phone to send the right data. Another important note is that the phone used can only be SAMSUNG, the HCO5 will NOT pair with an IPhone.
 Once in posession of a SAMSUNG, you must download an app that can bluetooth connect with the HCO5, and the app must allow you to configure what data to send to the HCO5. You have to
 make sure that the data send is either 0 or 1, or else the code would not work. If the data recieved is "1", then the code will count in binary from 0-15. Then at 15, the code
 checks if the data is still 1, if it is then the process repeats, if not then the LED will turn off. 
 */
int digit0 = 10; /* Digit0,1,2,3 are pins to display the LED*/
int digit1 = 11;
int digit2 = 12;
int digit3 = 13;
int timeDelay = 500; /* timeDelay is how much time in milliseconds before the binary counts up in the code*/
int state = 0; /* state takes in the data ouputted from the samsung phone to the arduino*/

void setup() {
  // put your setup code here, to run once:
  pinMode(digit0,OUTPUT);
  pinMode(digit1,OUTPUT);
  pinMode(digit2,OUTPUT);
  pinMode(digit3,OUTPUT);
  Serial.begin(9600);
  digitalWrite(digit0,LOW);
  digitalWrite(digit1,LOW);
  digitalWrite(digit2,LOW);
  digitalWrite(digit3,LOW);
}

void loop() {
  /* This first section of the code takes in the data from the phone and stores it in state variable*/
  if (Serial.available() > 0) {
    state = Serial.read();
  }
  /* State then reacts depending on the its value. If state is 1, then the binary counts from 0-15 with a half second delay. If it is 0 then there is no LED lights turned on*/
  if(state == '0') {
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    
  } else if (state == '1') {
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
   
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
  
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
  
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
    
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
    
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
    
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
    
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,LOW);
    delay(timeDelay);
  
  
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
    
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
    
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
    
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
  
     digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
    
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
    
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
    
    digitalWrite(digit0,HIGH);
    digitalWrite(digit1,HIGH);
    digitalWrite(digit2,HIGH);
    digitalWrite(digit3,HIGH);
    delay(timeDelay);
    state = 0;
  }
  

}
