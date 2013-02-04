#include <stdio.h>
#include <stdint.h>
#include "byte.h"


uint8_t mul1(uint8_t byte, int n){
  while (n > 0){
    uint8_t after = byte << 1;
    if (after < byte){
      after = after ^ (uint8_t)27;
    }
    byte = after;
    n--;
  }
  return byte;
}

uint8_t mul2(uint8_t byte1, uint8_t byte2){
  int round = 0;

  while (byte2 != (uint8_t)0 ){
    if (byte2 ^ (uint8_t)1 == (uint8_t) 1){
      byte1 = mul1(byte1, round);
    }

    byte2 = byte2 >> 1;
    round++;
  }

  return byte1;
}