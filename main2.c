#include <stdio.h>

#include "opmock.h"
#include "fizzbuzz_test.h"

int main(int argc, char *argv[])
{
  opmock_test_suite_reset();
  opmock_register_test(test_create_elem, "dList creation works");
  opmock_register_test(test_insert_element, "dList insertation works");
  opmock_register_test(delete_element_test, "dList deletion works");
  opmock_register_test(order_list, "orderdList works");
  opmock_register_test(print_test, "printing works");


  //opmock_register_test(test_fizzbuzz_with_5, "test_fizzbuzz_with_5");
  //opmock_register_test(test_fizzbuzz_with_15, "test_fizzbuzz_with_15");
  //opmock_register_test(test_fizzbuzz_many_3, "test_fizzbuzz_many_3");
  //opmock_register_test(test_fizzbuzz_many_5, "test_fizzbuzz_many_5");
  //opmock_register_test(test_fizzbuzz_many_3_and_5, "test_fizzbuzz_many_3_and_5");
  opmock_test_suite_run();

  return 0;
}
