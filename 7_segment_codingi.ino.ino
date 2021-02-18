nt i = 0;
int j = 0;
//void counter(); 
int num [10][4] = {
  {0,0,0,0},//0
  {1,0,0,0},//1
  {0,1,0,0},//2
  {1,1,0,0},//3
  {0,0,1,0},//4
  {1,0,1,0},//5
  {0,1,1,0},//6
  {1,1,1,0},//7
  {0,0,0,1},//8
  {1,0,0,1},//9
};
    
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  Serial.println("Enter a option \n 1 for counter \n 2 for input");

  while(Serial.available()==0){}
    int op= Serial.parseInt();
  if(op == 1)
  {counter(); 
  }
  else if(op == 2)
  {
    user_input();
  }
  else 
    Serial.println("Wrong Option!!");

  
}
void counter (){
    i=0;
  
  for (i=0; i<10; i++){
    int pin = 2;
    
    for (j=0; j<5; j++){
      digitalWrite(pin, num[i][j]);
      pin++;
    }
     delay(2000); 
  }
}
void user_input(){
  
  int n;
  Serial.println("Enter a number to display!!");
  while(Serial.available() ==0){};
  n=Serial.parseInt();
  Serial.print(n);
  int pin=2;
  for (j=0; j<5; j++){
      digitalWrite(pin, num[n][j]);
    pin++;
  }delay(4000);
}
