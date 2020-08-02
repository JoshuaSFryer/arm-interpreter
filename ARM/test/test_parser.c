#include "parser.h"
#include "instructions.h"
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}
void test_get_nth_bit(void) {
    TEST_ASSERT_EQUAL_INT(0b1, get_nth_bit(0b10, 1));
    TEST_ASSERT_EQUAL_INT(0b0, get_nth_bit(0b11110111, 3));
    TEST_ASSERT_NOT_EQUAL(0b1, get_nth_bit(0b10000000, 8));
}

void test_get_bit_range(void) {
    TEST_ASSERT_EQUAL_INT(0b111, get_bit_range(0b1110, 1, 3));
}

void test_add_instruction(void) {
    uint16_t add_instruction = ADD_3R << 9;
    int result = parse_instruction(add_instruction);
    TEST_ASSERT_EQUAL_INT(1, result);
}
