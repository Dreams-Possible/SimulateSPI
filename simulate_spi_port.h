#pragma once
#include"simulate_spi.h"
#ifdef ENABLE_SIMULATE_SPI
//inculde
#include<stdint.h>

//port init
void port_init();
//cs write
void cs_write(uint8_t bit);
//mosi write
void mosi_write(uint8_t bit);
//miso read
uint8_t miso_read();
//sck write
void sck_write(uint8_t bit);

#endif//#ifdef ENABLE_SIMULATE_SPI
