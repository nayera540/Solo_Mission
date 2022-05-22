#define red 13
#define yellow 12
#define green 11
#define push_button 10

int state;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(push_button,INPUT);

}

void loop() {
  state = digitalRead(push_button);
  
  if(state == 1){//push_button is pressed
      //Turning on the three leds
      digitalWrite(red,HIGH);
      digitalWrite(yellow,HIGH);
      digitalWrite(green,HIGH);
      
   
    }

    else{//push_button is not pressed
      //Turning off the three leds
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      
      
      }
  

}
