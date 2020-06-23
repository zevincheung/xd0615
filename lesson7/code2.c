#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

#define S1 9

#define LT 7
#define BT 8


volatile int pinInterrupt = 2; //接中断信号的脚
volatile byte n = 0 ;
void onChange()
{
  if ( digitalRead(pinInterrupt) == LOW )
      Serial.println("Key Down");
   else
      Serial.println("Key UP");
}
 
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  pinMode(key, INPUT_PULLUP);//设置管脚为输入
  
  Serial.begin(9600); //打开串口

  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(S1,HIGH);
  
 
   
   //Enable中断管脚, 中断服务程序为onChange(), 监视引脚变化
   attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
}
 
void loop()
{
  digitalWrite(S1,LOW);
  digitalWrite(IN1,n&0x1);
  digitalWrite(IN2,(n>>1)&0x1);
  digitalWrite(IN3,(n>>2)&0x1);
  digitalWrite(IN4,(n>>3)&0x1);
  digitalWrite(S1,HIGH);
  delay(1000);
  n++;
  if(n==10){
  n=0;
  }

}