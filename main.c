#include "l.h"



int main(){
  dList *root = createElemNo(3);

  insertElementD(root, root, 6);
  insertElementD(root, root, 4);
  insertElementD(root, root, 9);
  insertElementD(root, root, 19);

  dList *other = createElemNo(3);


  insertElementD(other, other, 612);
  insertElementD(other, other, 42);
  insertElementD(other, other, 91);
  insertElementD(other, other, 1);



  orderListD(root); //!
  orderListD(other); //!
  dList *asd =  mergeListsD(root,other);
  //orderListD(asd);
  printElementsD(asd);
  return 0;
}