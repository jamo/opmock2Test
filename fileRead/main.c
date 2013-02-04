#include <stdio.h>

#include "opmock.h"
#include "test.h"

int main(int argc, char *argv[]){
  opmock_test_suite_reset();
  opmock_register_test_points(testOneChar, "one char test","p1");
  opmock_register_test_points(testTwoChar, "two char test","p2");
  opmock_register_test_points(testOneLine, "one line test","p3");
  opmock_register_test_points(testTwoLines, "two line test","p4");
  opmock_test_suite_run();

  return 0;
}
