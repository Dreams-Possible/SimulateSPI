#include"simulate_spi.h"
#ifdef SIMULATE_SPI_H

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

//port init
void port_init()
{
    //cs

    //mosi

    //miso

    //sck

    return;
}

//cs write
void cs_write(uint8_t bit)
{
    return;
}

//mosi write
void mosi_write(uint8_t bit)
{
    return;
}

//miso read
uint8_t  miso_read()
{
    return 0;
}

//sck write
void sck_write(uint8_t bit)
{
    return;
}

#endif//#ifdef SIMULATE_SPI_H
