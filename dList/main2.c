#include <stdio.h>

#include "opmock.h"
#include "fizzbuzz_test.h"

int main(int argc, char *argv[]){
  opmock_test_suite_reset();
  opmock_register_test_points(test_create_elem, "dList creation works","2.5");
  opmock_register_test(test_insert_element, "dList insertation works");
  opmock_register_test(delete_element_test, "dList deletion works");
  opmock_register_test(order_list, "orderdList works");
  opmock_register_test(print_test, "printing works");
  opmock_register_test(test_merge, "merge works too");
  opmock_test_suite_run();

  return 0;
}
