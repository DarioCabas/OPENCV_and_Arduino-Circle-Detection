/*
  # Face tracking using arduino - Code #
  # Code by Harsh Dethe
  # 09 Sep 2018.
*/

#include<Servo.h>


Servo servoMotor;
char x;
long int v;

 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(6);
 
  // Inicializamos al ángulo 0 el servomotor
  servoMotor.write(0);
}
 

void loop()
{
if(Serial.available()>0){
  x =Serial.read();
 if(x =='X'){
    servoMotor.write(180);  
  }
 else if(x == 'Y'){
  servoMotor.write(0);  
  }
  }
}
  
