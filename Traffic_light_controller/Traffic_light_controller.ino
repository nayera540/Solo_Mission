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
      digitalWrite(red,HIGH);
      digitalWrite(yellow,HIGH);
      digitalWrite(green,HIGH);
      
   
    }

    else{
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      
      
      }
  

}
