#pragma once

//enable simulate_spi
#if 1
#define ENABLE_SIMULATE_SPI
//inculde
#include<stdint.h>
#include"simulate_spi_port.h"
#include "freertos/FreeRTOS.h"

//simulate spi init
void simulate_spi_init();
//simulate spi swap
void simulate_spi_swap(uint8_t*send,uint8_t*receive,uint32_t length);

#endif//#if 1
