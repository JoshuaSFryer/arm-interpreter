
#include "registers.h"

int get_nth_bit(int num, int n) {
    int mask = 1 << n;
    int masked_num = num & mask;
    int target_bit = masked_num >> n;
    return target_bit;
}

int get_bit_range(int num, int least, int greatest) {
    int mask = 0;
    for(int i=greatest; i<least; i--) {
        mask = mask & 1 << i;
    }
    int masked_num = num & mask;
    return masked_num >> least; 
}

void parse_instruction(int instruction) {

}