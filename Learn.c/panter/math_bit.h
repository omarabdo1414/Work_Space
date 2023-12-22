#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SET_BIT(reg, bitN) ((reg) |= (1 << bitN)) //Sets a bit (bitN) in a register (reg)
#define CLR_BIT(reg, bitN) ((reg) &= ~(1 << bitN)) //Clears a bit (bitN) in a register (reg)
#define TOG_BIT(reg, bitN) ((reg) ^= (1 << bitN)) //Toggles a bit (bitN) in a register (reg)
#define RET_BIT(reg, bitN) (1 & ((reg) >> bitN)) //Returns a value of bit (bitN) in a register(reg)

#endif