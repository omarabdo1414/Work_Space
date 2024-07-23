/*
 * private.h
 *
 *  Created on: May 20, 2024
 *      Author: Omar AbdElAleem
 */

#ifndef INC_PRIVATE_H_
#define INC_PRIVATE_H_

#include "STD_TYPES.h"

/* GPIO Sruct */
typedef struct
{
  volatile u32 CRL;
  volatile u32 CRH;
  volatile u32 IDR;
  volatile u32 ODR;
  volatile u32 BSRR;
  volatile u32 BRR;
  volatile u32 LCKR;
} GPIO_TypeDef;

/* Base */

#define FLASH_BASE            0x08000000 /*!< FLASH base address in the alias region */
#define FLASH_BANK1_END       0x0801FFFF /*!< FLASH END address of bank1 */
#define SRAM_BASE             0x20000000 /*!< SRAM base address in the alias region */
#define PERIPH_BASE           0x40000000 /*!< Peripheral base address in the alias region */

#define SRAM_BB_BASE          0x22000000 /*!< SRAM base address in the bit-band region */
#define PERIPH_BB_BASE        0x42000000 /*!< Peripheral base address in the bit-band region */


/*!< Peripheral memory map */
#define APB1PERIPH_BASE       PERIPH_BASE
#define APB2PERIPH_BASE       (PERIPH_BASE + 0x00010000UL)
#define AHBPERIPH_BASE        (PERIPH_BASE + 0x00020000UL)

/* Group A */
#define GPIOA_BASE            (APB2PERIPH_BASE + 0x00000800UL)
#define GPIOA                 ((GPIO_TypeDef *)GPIOA_BASE)

/* Group B */
#define GPIOB_BASE            (APB2PERIPH_BASE + 0x00000C00UL)
#define GPIOB                 ((GPIO_TypeDef *)GPIOA_BASE)

/* Group C */
#define GPIOC_BASE            (APB2PERIPH_BASE + 0x00001000UL)
#define GPIOC                 ((GPIO_TypeDef *)GPIOA_BASE)



#endif /*INC_PRIVATE_H_*/