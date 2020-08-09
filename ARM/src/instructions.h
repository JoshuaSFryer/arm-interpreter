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
 * Decode feild values. These are used to determine the category of
 * instruction.
 */
#define ASMC        0b00
#define DATA_PROC   0b010000
#define SPEC_DATA   0b010001
#define LS_WB       0b011
/**
 * Shift (immediate), add, subtract, move, and compare instructions.
 * Prefix: 00xxxx
 */

// Add (Rd, Rn, Rm)
#define ADD_3R      0b0001100 << 9
// Subtract (Rd, Rn, Rm)
#define SUB_3R      0b0001101 << 9
// Add (imm3, Rn, Rd)
#define ADD_2R_I    0b0001110 << 9
// Subtract (imm3, Rn, Rd)
#define SUB_2R_I    0b0001111 << 9
// Add (Rd, imm8)
#define ADDI        0b00110 << 11
// Subtract (Rd, imm8)
#define SUBI        0b00111 << 11
// Move (Rd, imm8)
#define MOV_I       0b00100 << 11
// Compare (Rn, imm8)
#define CMP_I       0b00101 << 11

/**
 * Data-processing (two low registers).
 * Prefix: 010000
 */


#endif