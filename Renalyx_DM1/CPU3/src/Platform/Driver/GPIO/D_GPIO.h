/*
 * D_GPIO.h
 *
 * Created: 12/9/2014 1:10:39 PM
 *  Author: wid7
 */ 


#ifndef D_GPIO_H_
#define D_GPIO_H_

#include "asf.h"

/* GPIO Support */
#define PIO_TYPE_Pos                  27
/* The pin is controlled by the peripheral A. */
#define PIO_TYPE_PIO_A         (0x1u << PIO_TYPE_Pos)
/* The pin is controlled by the peripheral B. */
#define PIO_TYPE_PIO_B         (0x2u << PIO_TYPE_Pos)
/* The pin is controlled by the peripheral C. */
#define PIO_TYPE_PIO_C         (0x3u << PIO_TYPE_Pos)
/* The pin is controlled by the peripheral D. */
#define PIO_TYPE_PIO_D         (0x4u << PIO_TYPE_Pos)

typedef enum _pio
{
	#if (SAM3XA)
	PA    = PIO_TYPE_PIO_A ,
	PB    = PIO_TYPE_PIO_B ,
	PC    = PIO_TYPE_PIO_C ,
	PD    = PIO_TYPE_PIO_D ,
	#endif
} pio_type;



void CPU3_D_INIT_PIO(void);
uint8_t CPU3_D_SET_PIO( pio_type peripheral,uint32_t pio);
uint8_t CPU3_D_RESET_PIO(const pio_type peripheral,uint32_t pio);
uint16_t CPU3_D_READ_PIO(pio_type peripheral,uint32_t pio);


#define PIN_CAN0_RX_IDX           (PIO_PA1_IDX)
#define PIN_CAN0_RX_FLAGS         (PIO_PERIPH_A | PIO_DEFAULT)

/** CAN0 PIN TX. */
#define PIN_CAN0_TX_IDX           (PIO_PA0_IDX)
#define PIN_CAN0_TX_FLAGS         (PIO_PERIPH_A | PIO_DEFAULT)

/** CAN0 transceiver PIN STANDBY. */
#define PIN_CAN0_STANDBY_IDX       (PIO_PA3_IDX )
#define PIN_CAN0_STANDBY_FLAGS    (PIO_TYPE_PIO_OUTPUT_0 | PIO_PULLUP )

#endif /* D_GPIO_H_ */