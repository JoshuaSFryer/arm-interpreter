#include <stdio.h>
#include <stdint.h>

#include "registers.h"
#include "instructions.h"

int get_nth_bit(int num, int n) {
    int mask = 1 << n;
    int masked_num = num & mask;
    int target_bit = masked_num >> n;
    return target_bit;
}

int get_bit_range(int num, int least, int greatest) {
    int mask = 0;
    for(int i=greatest; i>=least; i--) {
        mask = mask | (1 << i);
    }
    int masked_num = num & mask;
    return masked_num >> least; 
}

/**
 * Parse a decode header out of an instruction.
 * The header may be of variable width.
 */
char* parse_header(int num) {
    // Check the special cases first
    // ADD/SUB/MOV/CMP
    if (get_bit_range(num, 14, 15) == ASMC) {
        return "ASMC";
    }
    // Load/store word/byte
    else if (get_bit_range(num, 13, 15) == LS_WB) {
        return "LSWS";
    }
}

int parse_instruction(uint16_t instruction) {
    if (get_bit_range((int) instruction, 14, 15) == 0) {
        return 1;
    }
}