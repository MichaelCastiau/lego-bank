#include <stdint.h>
#include "stm32f0xx_hal.h"
/*
 * ports.h
 *
 *  Created on: Jan 21, 2020
 *      Author: michael
 */

#ifndef INC_PORTS_H_
#define INC_PORTS_H_

typedef struct {
	GPIO_TypeDef *port;
	uint16_t pin;
} OutputChannel;

/**
 * Channels as they are defined in hardware
 * Channels are active high
 */
#define CHANNEL_1_PORT GPIOB
#define CHANNEL_1_PIN  GPIO_PIN_14
#define CHANNEL_2_PORT GPIOB
#define CHANNEL_2_PIN  GPIO_PIN_15
#define CHANNEL_3_PORT GPIOA
#define CHANNEL_3_PIN  GPIO_PIN_8
#define CHANNEL_4_PORT GPIOA
#define CHANNEL_4_PIN  GPIO_PIN_9
#define CHANNEL_5_PORT GPIOA
#define CHANNEL_5_PIN  GPIO_PIN_10
#define CHANNEL_6_PORT GPIOA
#define CHANNEL_6_PIN  GPIO_PIN_11

#endif /* INC_PORTS_H_ */
