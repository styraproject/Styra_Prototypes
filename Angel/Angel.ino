#include <Wire.h>
#include "EEPROM.h"
#include <Adafruit_MCP23017.h>
#include <Styra_State.h>
#include <Styra_Config.h>
#include <Styra_Config_InternalEEProm.h>
#include <Styra_Controller.h>
#include <Styra_Controller_Basic.h>
#include <Styra_Pointer.h>
#include <Styra_Pointer_Analog.h>

// #define SERIAL_DEBUG 

StyraConfigInternalEEProm config = StyraConfigInternalEEProm();
StyraControllerBasic controller = StyraControllerBasic(5,11,10,9,6,5);
StyraPointerAnalog pointer = StyraPointerAnalog(A0,A1);

StyraState styra = StyraState((StyraConfig*)&config,(StyraPointer*)&pointer,(StyraController*)&controller);

void setup() {
#ifdef SERIAL_DEBUG
  Serial.begin(9600);
  while (!Serial);
#endif
  // put your setup code here, to run once:
  styra.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  styra.update();
}
