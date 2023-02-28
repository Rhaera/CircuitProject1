// C++ code

int PinLar = 8;
int PinVer = 9;
int PinAzu = 10;

int pinTMP = 0;

int valorTMP = 0;

void setup()
{

  pinMode(PinLar, OUTPUT);
  pinMode(PinVer, OUTPUT);
  pinMode(PinAzu, OUTPUT);
  
  Serial.begin(9600);
  
  digitalWrite(PinLar, HIGH);
  digitalWrite(PinVer, LOW);
  digitalWrite(PinAzu, LOW);
  
}

void loop()
{

  valorTMP = analogRead(pinTMP);
  
  Serial.print("TMP value: ");
  Serial.println(valorTMP);
  
  if(valorTMP <= 125)
  {
  	
    digitalWrite(PinLar, LOW);
  	digitalWrite(PinVer, LOW);
  	digitalWrite(PinAzu, HIGH);
    
  }  
	  
  if(valorTMP > 125 and valorTMP <= 160)
  {
  	
    digitalWrite(PinLar, LOW);
  	digitalWrite(PinVer, HIGH);
  	digitalWrite(PinAzu, LOW);
    
  }
  
  if(valorTMP > 160)
  {
  	
    digitalWrite(PinLar, HIGH);
  	digitalWrite(PinVer, LOW);
  	digitalWrite(PinAzu, LOW);
    
  }
}
