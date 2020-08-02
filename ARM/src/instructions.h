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
 * Shift (immediate), add, subtract, move, and compare instructions.
 */
#define ADD_3R      0b0001100
#define SUB_3R      0b0001101
#define ADD_2R_I    0b0001110
#define SUB_2R_I    0b0001111
#define ADDI        0b00110
#define SUBI        0b00111

#define MOV_I       0b00100
#define CMP_I       0b00101


#endif