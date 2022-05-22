#include "Arduino.h"
#include "traffic.h"

traffic::traffic(int ledfw_1, int ledfw_2, int ledfw_3, int ledsw_1, int ledsw_2, int ledsw_3, int ledtw_1, int ledtw_2, int ledtw_3, int ledftw_1, int ledftw_2, int ledftw_3)
{
   ledFw_1, ledFw_2, ledFw_3, ledSw_1, ledSw_2, ledSw_3, ledTw_1, ledTw_2, ledTw_3, ledFtw_1, ledFtw_2, ledFtw_3 = ledfw_1, ledfw_2, ledfw_3, ledsw_1, ledsw_2, ledsw_3, ledtw_1, ledtw_2, ledtw_3, ledftw_1, ledftw_2, ledftw_3;

   pinMode(ledFw_1, OUTPUT);
   pinMode(ledFw_2, OUTPUT);
   pinMode(ledFw_3, OUTPUT);

   pinMode(ledSw_1, OUTPUT);
   pinMode(ledSw_2, OUTPUT);
   pinMode(ledSw_3, OUTPUT);

   pinMode(ledTw_1, OUTPUT);
   pinMode(ledTw_2, OUTPUT);
   pinMode(ledTw_3, OUTPUT);

   pinMode(ledFtw_1, OUTPUT);
   pinMode(ledFtw_2, OUTPUT);
   pinMode(ledFtw_3, OUTPUT);
}

traffic::two_way(bool state, int delays)
{

   if (state != true)
   {
   }
   else
   {
      digitalWrite(ledFw_1, HIGH); //this code is for a two way traffic light
      digitalWrite(ledSw_3, HIGH);
      delay(delays);
      digitalWrite(ledFw_1, LOW);
      digitalWrite(ledSw_3, LOW);

      digitalWrite(ledFw_2, HIGH);
      digitalWrite(ledSw_2, HIGH);
      delay(delays);
      digitalWrite(ledFw_2, LOW);
      digitalWrite(ledSw_2, LOW);

      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_1, HIGH);
      delay(delays);
      digitalWrite(ledFw_3, LOW);
      digitalWrite(ledSw_1, LOW);
   }
}
traffic::four_way(bool state, int delays)
{

   if (state != true)
   {
   }
   else
   {
      digitalWrite(ledFw_1, HIGH);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_3, HIGH);
      delay(delays);
      digitalWrite(ledFw_1, LOW);
      digitalWrite(ledSw_3, LOW);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_3, HIGH);

      digitalWrite(ledFw_2, HIGH);
      digitalWrite(ledSw_2, HIGH);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_3, HIGH);
      delay(delays);
      digitalWrite(ledFw_2, LOW);
      digitalWrite(ledSw_2, LOW);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_3, HIGH);

      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_1, HIGH);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_3, HIGH);
      delay(delays);
      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_1, LOW);
      digitalWrite(ledTw_3, LOW);
      digitalWrite(ledFtw_3, HIGH);

      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_2, HIGH);
      digitalWrite(ledTw_2, HIGH);
      digitalWrite(ledFtw_3, HIGH);
      delay(delays);
      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_2, LOW);
      digitalWrite(ledTw_2, LOW);
      digitalWrite(ledFtw_3, HIGH);

      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_1, HIGH);
      digitalWrite(ledFtw_3, HIGH);
      delay(delays);
      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_1, LOW);
      digitalWrite(ledFtw_3, LOW);

      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_1, HIGH);
      digitalWrite(ledTw_2, HIGH);
      digitalWrite(ledFtw_2, HIGH);
      delay(delays);
      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_2, LOW);
      digitalWrite(ledFtw_2, LOW);

      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_1, HIGH);
      delay(delays);
      digitalWrite(ledFw_3, LOW);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_3, LOW);
      digitalWrite(ledFtw_1, LOW);

      digitalWrite(ledFw_2, HIGH);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_2, HIGH);
      digitalWrite(ledFtw_2, HIGH);
      delay(delays);
      digitalWrite(ledFw_2, LOW);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_2, LOW);
      digitalWrite(ledFtw_2, LOW);

      digitalWrite(ledFw_1, HIGH);
      digitalWrite(ledSw_3, HIGH);
      digitalWrite(ledTw_1, HIGH);
      digitalWrite(ledFtw_3, HIGH);
      delay(delays);
      digitalWrite(ledFw_1, LOW);
      digitalWrite(ledSw_3, LOW);
      digitalWrite(ledTw_1, LOW);
      digitalWrite(ledFtw_3, LOW);

      digitalWrite(ledFw_2, HIGH);
      digitalWrite(ledSw_2, HIGH);
      digitalWrite(ledTw_2, HIGH);
      digitalWrite(ledFtw_2, HIGH);
      delay(delays);
      digitalWrite(ledFw_2, LOW);
      digitalWrite(ledSw_2, LOW);
      digitalWrite(ledTw_2, LOW);
      digitalWrite(ledFtw_2, LOW);

      digitalWrite(ledFw_3, HIGH);
      digitalWrite(ledSw_1, HIGH);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_1, HIGH);
      delay(delays);
      digitalWrite(ledFw_3, LOW);
      digitalWrite(ledSw_1, LOW);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_1, LOW);

      digitalWrite(ledFw_2, HIGH);
      digitalWrite(ledSw_2, HIGH);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_2, HIGH);
      delay(delays);
      digitalWrite(ledFw_2, LOW);
      digitalWrite(ledSw_2, LOW);
      digitalWrite(ledTw_3, HIGH);
      digitalWrite(ledFtw_2, LOW);
   }
}
