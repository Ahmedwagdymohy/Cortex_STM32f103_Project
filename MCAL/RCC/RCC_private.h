/**
 * @file RCC_private.h
 * @author your name (you@domain.com)
 * @brief  Here we write the privat part of the code which we don't want anyone to see 
 * @version 0.1
 * @date 2024-02-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef RCC_private_H_
#define RCC_private_H_


//in the STM32F103C8 Reference Manual file we can get the addresses
/* First we get the base address of the pripheral like RCC_BASE_ADDRESS then we get the the addresses of the registers related to this 
    periphral by adding offset to the base address*/

#define RCC_BASE_ADDRESS                     0x40021000 
#define RCC_CR                    (*( u32 *)(0x40021000 + 0x00))  //clock control register
#define RCC_CFGR                  (*( u32 *)(0x40021000 + 0x04))  //clock configration register CFGR
#define RCC_CIR                   (*( u32 *)(0x40021000 + 0x08))  //clock interupt register
#define RCC_APB2RSTR              (*( u32 *)(0x40021000 + 0x0C))  // APB stands for advanced periphral bus and RSTR is for reset register
#define RCC_APB1RSTR              (*( u32 *)(0x40021000 + 0x010)) // same as above but 1
#define RCC_AHBENR                (*( u32 *)(0x40021000 + 0x14)) // same as above but 1
#define RCC_APB2ENR               (*( u32 *)(0x40021000 + 0x18)) // same as above but 1
#define RCC_APB1ENR               (*( u32 *)(0x40021000 + 0x1C)) // same as above but 1
#define RCC_BDCR                  (*( u32 *)(0x40021000 + 0x20)) // same as above but 1
 


#endif