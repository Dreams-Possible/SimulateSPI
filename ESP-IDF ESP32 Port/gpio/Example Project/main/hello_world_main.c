#include<stdio.h>
#include"freertos/FreeRTOS.h"
#include"freertos/task.h"

#include"simulate_spi.h"

void app_main(void)
{
    //simulate spi init
    simulate_spi_init();
    uint8_t send[8]={0};
    uint8_t receive[8]={0};
    //simulate spi swap
    simulate_spi_swap(send,receive,8);
}
