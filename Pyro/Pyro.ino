#include <Wire.h>
#include "EEPROM.h"
#include <Adafruit_MCP23017.h>
#include <Styra_State.h>
#include <Styra_Config.h>
#include <Styra_Config_I2CEEProm.h>
#include <Styra_Controller.h>
#include <Styra_Controller_MCP23017.h>
#include <Styra_Pointer.h>
#include <Styra_Pointer_Analog.h>

// #define SERIAL_DEBUG 

StyraConfigI2CEEProm config = StyraConfigI2CEEProm();
StyraControllerMCP23017 controller = StyraControllerMCP23017();
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
