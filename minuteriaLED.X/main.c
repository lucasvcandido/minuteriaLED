/*
 * File:   main.c
 * Author: 19180064
 *
 * Created on 16 de Março de 2020, 08:11
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "leds.h"

void main(void)
{
    setLED(0);
    initLED();
    initS0;
    
    while(1)
    {
        setLED(lerS0);
        delay(1500);
    }
    return;
}
