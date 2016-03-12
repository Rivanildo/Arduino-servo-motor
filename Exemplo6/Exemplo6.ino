#include <Servo.h>   //biblioteca para controle de servo motores
Servo servo1;   // nomeia uma variável para ser servo motor
int port;   // variavel que recebera dados do joystick

void setup(){
  servo1.attach(7);   //diz que o servo1 esta conectado a porta digital 7
  servo1.write(90);   //servo1 começa em posição 90 graus
}

void loop(){
  port = analogRead(5);   //port recebe dados do joy
  port = map(port,0,1023,0,180);   //a rotina map, mapeia os dados (Quase uma regra de 3)
  servo1.write(port);   // servo1 se movimenta com os dados já mapeados do joystick
  delay(15);   //um pequeno atraso na progamação para tornar o controle "mais humano" 
}
