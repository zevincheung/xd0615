void setup() {
  Serial.begin(9600);//启动串行连接
  pinMode(2, INPUT_PULLUP);//将针脚2设为输入，并启用内部上拉电阻器
  pinMode(13, OUTPUT);

}

void loop() {
  int sensorVal = digitalRead(2);//按钮值读入变量
  Serial.println(sensorVal);//输出按钮值

  /*注意，上拉意味着输入端电平转换。当它打开时输入端为高电平，被按压
  时则为低电平。
  当按钮被按压时打开针脚13上的灯，没有被按压时则关闭针脚13的灯。
  */
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}