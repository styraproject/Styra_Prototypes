# Styra_Prototypes
Styra Project prototype input devices

Styra prototypes are defined by their layout, button configuration, electronic components and firmware.  Each prototype should include a text description of the prototype, a list of the components used to assemble the physical prototype, required libraries, diagram of electronic component, button macro configuration and Arduino sketch.


## Setup Development Environment
1. Install Arduino IDE (1.6.5)
2. Install Required Libraries
  1. Sketch -> Include Libraries -> Manage Libraries
  2. Adafruit MCP23017 Arduino Library
1. Document the Sketchbook location
  1. File -> Preferences 
  1. Record the Sketchbook location (/home/lhindman/workspace/Arduino)
1. Checkout the Styra libraries into the Sketchbook libraries folder
  1. cd /home/lhindman/workspace/Arduino/libraries
  1. git clone https://github.com/styraproject/Styra_Config.git
  1. git clone https://github.com/styraproject/Styra_Controller.git
  1. git clone https://github.com/styraproject/Styra_Core.git
  1. git clone https://github.com/styraproject/Styra_Pointer.git
1. Checkout the Styra prototypes into the Skechbook folder
  1. cd /home/lhindman/workspace/Arduino
  2. git clone https://github.com/styraproject/Styra_Prototypes.git


