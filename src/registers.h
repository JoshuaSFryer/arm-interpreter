#ifndef REGISTERS_H
#define REGISTERS_H

// GENERAL-PURPOSE REGISTERS
extern int reg[];
#define R0 reg[0]
#define R1 reg[1]
#define R2 reg[2]
#define R3 reg[3]
#define R4 reg[4]
#define R5 reg[5]
#define R6 reg[6]
#define R7 reg[7]
#define R8 reg[8]
#define R9 reg[9]
#define R10 reg[10]
#define R11 reg[11]
#define R12 reg[12]
#define STACK_POINTER reg[13]
#define LINK_REGISTER reg[14]
#define PC reg[15]

// Program Status Register
// Combines APSR, IPSR, EPSR
extern int XPSR;

#define FLAG_N XPSR[31]
#define FLAG_Z XPSR[30]
#define FLAG_C XPSR[29]
#define FLAG_V XPSR[28]
#define FLAG_Q XPSR[27]

// The Interrupt Program Status Register is bits 0-8 of the XPSR
#define IPSR XPSR & 0x1FF // mask of first 9 bits

extern int PRIMASK;     // 1-bit exception mask register
extern int BASEPRI;     // 8-bit priority mask register 
extern int FAULTMASK;   // 1-bit fault mask register
extern int CONTROL;     // 2, 3, or 4-bit register

// Stack Pointer Limit registers
extern int MSPLIM;
extern int PSPLIM;

// Stack Pointers
extern int MSP; // Main
extern int PSP; // Process


#endif
