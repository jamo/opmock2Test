#include <stdio.h>
#include <stdint.h>
#include "opmock.h"
#include "test.h"

int main(int argc, char *argv[]){
  opmock_test_suite_reset();

  opmock_register_test_points(testAllZero, "one char test","1");
  opmock_register_test_points(testAllOne, "two char test","2");
  opmock_register_test_points(testRandom, "one line test","3");
  opmock_register_test_points(test2AllZero, "two line test","4");

  opmock_register_test_points(test2AllOne, "one line test","5");
  opmock_register_test_points(test2AllSomething, "two line test","6");

  opmock_test_suite_run();

  return 0;
}
