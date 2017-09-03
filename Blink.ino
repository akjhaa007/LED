/*
 * LED BLINK FOR FUN
 */
int sensor=A0;
int led=13;

int SensorIn =0;


//-----------------------------------------------------------------------------------------------------------------
void setup() {


  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  pinMode(SensorIn,INPUT);
  pinMode(12,INPUT);
}

//-------------------------------------------------------------------------------------------


// the loop function runs over and over again forever
void loop() {

SensorIn=analogRead(sensor);

  
  if(SensorIn>100)
  {

    digitalWrite(led,HIGH);
delay(100);

digitalWrite(led,LOW);
delay(100);


digitalWrite(12,LOW);



   
  }
  else
  {

 digitalWrite(led,LOW);

 
 
    digitalWrite(12,HIGH);
delay(100);

digitalWrite(12,LOW);
delay(100);
 
 //digitalWrite(12,HIGH);
    
  }
}
