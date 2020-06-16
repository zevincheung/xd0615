int i=1;
void setup() {
  for(i=0;i<7;i++){
  pinMode(i, OUTPUT);
  }
}

void loop() {
  for(i=1;i<7;i++){
    for(i=1;i/2==0;i++){
    digitalWrite(1, LOW);
    digitalWrite(3, LOW);  
    digitalWrite(5, LOW);  
    digitalWrite(2, HIGH);
  	digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
     delay(100);

    digitalWrite(2, LOW);
    digitalWrite(4, LOW);  
    digitalWrite(6, LOW);  
    digitalWrite(1, HIGH);
  	digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
     delay(100);
    }
  }     
}