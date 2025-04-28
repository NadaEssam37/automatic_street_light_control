#include <reg51.h>

sbit sensor1 = P1^0;
sbit sensor2 = P1^1;
sbit sensor3 = P1^2;
// sensors on street//
sbit load1 = P2^0;
sbit load2 = P2^1;
sbit load3 = P2^2;
// street light connections//

void main() {
    load1 = 0;
    load2 = 0;
    load3 = 0;
    // All loads initialized to OFF

     sensor1 = 0;
     sensor2 = 0;
     sensor3 = 0;
    // Optional logic based on input - sensors are inputs, so assigning them 0 might not be what you intend.

while (1) 
{
	
        if (sensor1 == 1) {
            load1 = 1;    // street light 1 on
            load2 = 0;    // street light 2 off
            load3 = 0;    // street light 3 off
        } else if (sensor2 == 1) {
            load1 = 0;
            load2 = 1;    // street light 2 on
            load3 = 0;
        } else if (sensor3 == 1) {
            load1 = 0;
            load2 = 0;
            load3 = 1;    // street light 3 on
        } else {
            // If none of the sensors are high, turn off all lights (optional)
            load1 = 0;
            load2 = 0;
            load3 = 0;
        }
    }
}