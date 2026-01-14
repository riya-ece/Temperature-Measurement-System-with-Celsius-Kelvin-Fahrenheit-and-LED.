int analogPin = A2;
int readpin = 7;
float reader;
float Temp;
float scale_f = 0.01;
float calcval;
float TempF;
float TempK;
void setup()
{
  pinMode(analogPin,INPUT);
  pinMode(readpin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 reader = analogRead(analogPin);
 calcval = reader*(5.0/1023.0);
 Temp = calcval/scale_f;
 Serial.print("C:");
 Serial.println(Temp);
 TempF = Temp*(9./5.)+32;
 Serial.print("F:");
 Serial.println(TempF);
 TempK = Temp + 273;
 Serial.print("K:");
 Serial.println(TempK);
 delay(200);
  if (Temp>=30){
    digitalWrite(readpin,HIGH);
    delay(5000);
    digitalWrite(readpin,LOW);
    delay(5000);
  }else{
    digitalWrite(readpin,LOW);
    delay(2000);
  }
}
