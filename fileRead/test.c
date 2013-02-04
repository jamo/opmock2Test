#include "test.h"
#include "file.h"
#include "opmock.h"
#include <stdlib.h>
#include <stdio.h>


void testOneChar(){
  OP_ASSERT_TRUE_MSG("file with one char should return 1", readFile("onechar")==1);
}
void testTwoChar(){
  OP_ASSERT_TRUE_MSG("file with one char should return 1", readFile("twochar")==2);
}
void testOneLine(){
  OP_ASSERT_TRUE_MSG("file with one char should return 1", readFile("oneline")==30);
}
void testTwoLines(){
  OP_ASSERT_TRUE_MSG("file with one char should return 1", readFile("twoline")==7);
}

