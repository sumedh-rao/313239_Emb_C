#ifndef _activity1_h_
#define _activity1_h_

#include <avr/io.h>
#include "activity1.h"

//Macro definition

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SENSOR_ON !(PIND&(1<<PD0)) // Switch1 ON
#define HEAT_ON !(PIND&(1<<PD1)) // Switch2 ON


void ledstat(uint8_t state);
void InitLED(void);

#endif
