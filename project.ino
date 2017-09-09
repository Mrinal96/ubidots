
int entry=0;
int exit1=0;
void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT);   
pinMode(11,INPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

int entry1=digitalRead(13);
int exit2=digitalRead(11);
if(entry1==LOW)
{
  
  entry=entry+1;
  Serial.println("ENTRY=");
  Serial.println(entry);
  delay(2000);
  }


  
if(exit2==HIGH)
{
  
  exit1=exit1+1;
  Serial.println("EXIT=");
  Serial.println(exit1);
  delay(2000);
  }
  

  }
