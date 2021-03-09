int i = 0;
int j = 0;
void counter(int); 
int num [10] = 
  {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};
int pinten=13;
int pinone=12;
int ones=0;
int tens=0; 
void setup()
{
    pinMode(2, OUTPUT);

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
 pinMode(pinone, OUTPUT);
  pinMode(pinten, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  if(tens==9){
  ones=0;
  tens=0;
  }
 digitalWrite(pinone,0);
  digitalWrite(pinten,1);
  counter(ones);
  delay(10);
   digitalWrite(pinone,1);
  digitalWrite(pinten,0);
  counter(tens);
  delay(10);
  if(ones<9)
  {ones++;
       delay(20); 
}
  else if(ones==9)
  {
    tens++;
    ones=0;
  }

  
}
void counter (int n){
  
    int pin = 2;
    
    for (j=0; j<8; j++){
      digitalWrite(pin,bitRead(num[n], j));
      pin++;
    }
  }
