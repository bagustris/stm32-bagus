#include "hal.h"
#include "ch.h"

int main(void){
 halInit();
  chSysInit();
  palSetPadMode(GPIOA,8,PAL_MODE_OUTPUT_PUSHPULL);
  
  while(1){
    palClearPad(GPIOA,8);
    chThdSleepMilliseconds(500);
    palSetPad(GPIOA,8);
    chThdSleepMilliseconds(500);
  }
  
}
