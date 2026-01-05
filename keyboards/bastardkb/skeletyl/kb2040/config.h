#pragma once

// Serial comms
#define USE_SERIAL
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600

#define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left. uncomment for left, comment for right

// Bootmagic key 
#ifdef SPLIT_HAND_PIN_LOW_IS_LEFT
  #define BOOTMAGIC_LITE_ROW 0        // TOP RIGHT KEY ON RIGHT SIDE, TOP LEFT KEY ON LEFT SIDE
#else
  #define BOOTMAGIC_LITE_ROW 4
#endif

#define BOOTMAGIC_LITE_COLUMN 0