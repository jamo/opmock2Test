#include <stdint.h>
#include "test.h"
#include "byte.h"
#include "opmock.h"
#include <stdlib.h>
#include <stdio.h>


void testAllZero(){
  uint8_t foo = 0;
  uint8_t result = 0;
  OP_ASSERT_TRUE(mul1(foo, 3) == result);
}
void testAllOne(){
  uint8_t foo = 255;
  uint8_t result = 185;
  uint8_t true_result = mul1(foo, 3);
  OP_ASSERT_TRUE(true_result == result);
}
void testRandom(){
  uint8_t foo = 123;
  uint8_t result = 245;
  OP_ASSERT_TRUE(mul1(foo, 3) == result);
}

void test2AllZero(){
  uint8_t foo = 0;
  uint8_t bar = 0;
  uint8_t result = 0;
  OP_ASSERT_TRUE(mul2(foo, bar) == result);

}
void test2AllOne(){
  uint8_t foo = 255;
  uint8_t bar = 255;
  uint8_t result = 149;
  OP_ASSERT_TRUE(mul2(foo, bar) == result);
}
void test2AllSomething(){
  uint8_t foo = 123;
  uint8_t bar = 231;
  uint8_t result = 132;

  OP_ASSERT_TRUE(mul2(foo, bar) == result);
}



/*
uint8_t true_result = mul2(foo, bar);
printf("%u\n", true_result);
*/