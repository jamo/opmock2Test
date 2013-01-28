#include "fizzbuzz_test.h"
#include "l.h"
#include "opmock.h"
#include <stdlib.h>
#include <stdio.h>

void test_create_elem(){
  dList *eka = createElemNo(22);
  OP_ASSERT_TRUE(eka->x=22);
  dList *toka = createElem(2, eka, NULL);
  OP_ASSERT_TRUE(toka->prev==eka);
  OP_ASSERT_TRUE(eka->next==toka);


  free(eka);
  free(toka);
}

void test_insert_element(){
  dList *eka = createElemNo(1);
  dList *toka = createElem(2, eka, NULL);
  insertElementD(eka, toka, 9);
  if (toka->next!=NULL){
    OP_ASSERT_TRUE(toka->next->x == 9);
  } else {
    OP_ASSERT_TRUE(0);
  }
  if (toka->next!=NULL){
    OP_ASSERT_TRUE(toka->next->prev == toka);
  } else {
    OP_ASSERT_TRUE(0);
  }
  free(eka);
  free(toka->next);
  free(toka);

  eka = createElemNo(1);
  insertElementD(eka,eka, 99);
  dList *toka1;
  if ((toka1 = eka->next)!=NULL){
    OP_ASSERT_TRUE(toka1->x == 99);
  } else{
    OP_ASSERT_TRUE(0);
  }
}


void delete_element_test(){
  dList *eka = createElem(1,NULL,NULL);
  insertElementD(eka,eka,2);
  if (eka->next == NULL){
    OP_ASSERT_TRUE(0);
  } else{
    insertElementD(eka,eka->next,3);
  }
  dList *paluu = deleteElementD(eka, eka->next);
  OP_ASSERT_TRUE(paluu->x == 1);
  OP_ASSERT_TRUE(paluu->next->x == 3);
}

void order_list(){
  dList *eka = createElem(9,NULL,NULL);
  insertElementD(eka,eka,2);
  insertElementD(eka,eka->next,11);
  insertElementD(eka,eka->next->next,1);
  orderListD(eka);
  OP_ASSERT_TRUE(eka->x==1);
  OP_ASSERT_TRUE(eka->next->x==2);
  OP_ASSERT_TRUE(eka->next->next->next->x==11);

}

void print_test() {
  dList *eka = createElemNo(22);
  insertElementD(eka,eka,23);
  insertElementD(eka,eka->next,35);
  freopen ("output.txt","w",stdout);
  printElementsD(eka);
  fclose(stdout);
  freopen ("/dev/tty", "a", stdout);
  FILE *fp = fopen ("output.txt","r+");
  OP_ASSERT_TRUE(fgetc(fp) =='2');
  OP_ASSERT_TRUE(fgetc(fp) =='2');
  OP_ASSERT_TRUE(fgetc(fp) =='\n');
  OP_ASSERT_TRUE(fgetc(fp) =='2');
  OP_ASSERT_TRUE(fgetc(fp) =='3');
  OP_ASSERT_TRUE(fgetc(fp) =='\n');
  OP_ASSERT_TRUE(fgetc(fp) =='3');
  OP_ASSERT_TRUE(fgetc(fp) =='5');
  fclose(fp);
}
