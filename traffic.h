#include "Arduino.h"

class traffic{

  public:
  
  traffic(int ledfw_1,int ledfw_2,int ledfw_3, int ledsw_1,int ledsw_2,int ledsw_3, int ledtw_1,int ledtw_2,int ledtw_3, int ledftw_1,int ledftw_2, int ledftw_3);
  two_way( bool state, int delays);
  four_way( bool state, int delays);

  
int ledFw_1,ledFw_2, ledFw_3,ledSw_1,ledSw_2,ledSw_3,ledTw_1,ledTw_2,ledTw_3,ledFtw_1,ledFtw_2,ledFtw_3;
};  
