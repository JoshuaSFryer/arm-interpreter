#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

/**
 * Instructions are a stream of halfword-aligned halfwords (16-bits).
 * Some instructions in the T32 spec are halfwords, some are words.
 * The five MSB [15:11] of the halfword indicate whether the instruction is 16
 * or 32 bits long.
 */
#define INS_32_HEADER 0b111 // Any non-0b111 header indicates a halfword instruction


// 16-BIT INSTRUCTION ENCODINGS
/**
 * Shift (immediate), add, subtract, move, and compare instructions are prefixed
 * with 00xxxx.
*/
#define ADD_3R      0b01100     // Add three low registers
#define SUB_3R      0b01101     // Subtract three low registers
#define ADD_2R_I    0b01110     // Add two low registers and imm
#define SUB_2R_I    0b01111     // Subtract two low registers and imm

#define ADD_1R_I    0b110       // Add one low register and imm
#define SUB_1R_I    0b111       // Subtract one low register and imm

#define MOV_I       0b100       // Move imm value to destination register
#define CMP_I       0b101       // Subtract imm from register, update condition
                                // flags and discard result

#endif