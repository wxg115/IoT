#include <SimpleTimer.h>
SimpleTimer timerCnt;
static unsigned long loopCnt;
  
void timerCntFunc() {
  Serial.println(loopCnt);
  loopCnt = 0;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println();

  timerCnt.setInterval(1000, timerCntFunc);
}

void loop() {
  // put your main code here, to run repeatedly:
  timerCnt.run();
  loopCnt++;
}
