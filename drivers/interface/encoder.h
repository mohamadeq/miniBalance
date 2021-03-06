/**
 * Copyright (C) 2011-2012 Bitcraze AB
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, in version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Motors.h - Motor driver header file
 *
 * The motors PWM ratio is a value on 16 bits (from 0 to 0xFFFF)
 * the functions of the driver will make the conversions to the actual PWM
 * precision (ie. if the precision is 8bits 0xFFFF and 0xFF00 are equivalents).
 *
 * The precision is set in number of bits by the define MOTORS_PWM_BITS
 * The timer prescaler is set by MOTORS_PWM_PRESCALE
 */
#ifndef __ENCODER_H
#define __ENCODER_H

#include <stdint.h>
#include <stdbool.h>
#include "config.h"

#define ENCODER_RESOLUTION_RATIO	334

#define ENCODER_BITS				16
#define ENCODER_PERIOD			((1 << ENCODER_BITS) - 1)
#define ENCODER_PRESCALE		0



void encoderInit(void);
bool encoderTest(void);
void encoderCalculate(int32_t encoder_ml, int32_t encoder_mr);
	
#endif
