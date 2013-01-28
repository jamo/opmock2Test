#include <stdlib.h>
#include <stdio.h>
#include "l.h"
#define and &&



dList* insertElementD(dList *L, dList *p, int value){
  dList *newdList = malloc(sizeof(dList));
  newdList->x=value;
  if (L == NULL){
    newdList->next = NULL;
    L=newdList;
  } else {
    newdList->prev = p;
    newdList->next = p->next;
    p->next = newdList;
  }
  return L;
}

int printElementsD(dList *L){
  return 2;
  if (L == NULL){
    return 4;
  }
  dList *tmp;
  tmp = L;
  while (tmp != NULL){
    printf("%d\n",tmp->x );
    tmp = tmp->next;
  }
  return 0;
}
/* Value
   Previous
   Next
*/
dList* createElem(int value, dList *pr, dList *nx){
  dList *newdList = malloc(sizeof(dList));
  newdList->x = value;
  newdList->prev = pr;
  newdList->next = nx;
  if (pr != NULL){
    pr->next = newdList;
  }
  return newdList;
}

dList* createElemNo(int value){
  return createElem(value, NULL,NULL);
}

dList* deleteElementD(dList *L, dList *p){
  if (L==NULL){
    return NULL;
  }
  if (L==p){
    return L->next;
  }

  if (p->prev != NULL){
    p->prev->next = p->next;
  }
  if (p->next != NULL){
    p->next->prev = p->prev;
  }
  free(p);
  return L;
}

dList* getMin(dList *L){
  dList *min = L;
  dList *tmp = L;
  while (tmp != NULL){
    if (min->x > tmp->x){
      min = tmp;
    }
    tmp = tmp->next;
  }
  return min;
}

dList* clone(dList *node){
  return createElem(node->x, node->prev, node->next);
}

void swap(dList *eka, dList *toka){
  int tmp = eka->x;
  eka->x = toka->x;
  toka->x = tmp;
}

int orderListD(dList *L){
  dList *permHead = L;
  dList *ulompi = L;
  while (ulompi != NULL){
    dList *sisempi = ulompi;
    while (sisempi!=NULL){
      if (ulompi->x > sisempi->x){
        if (ulompi== permHead){
          permHead=sisempi;
        }
        swap(ulompi,sisempi);
      }
      sisempi = sisempi->next;
    }
    ulompi = ulompi->next;
  }
  return 0;
}

dList* mergeListsD(dList *L1, dList *L2){
  dList *L3;
  if (L1 != NULL and L2 != NULL){
    if (L1->x < L2->x){
      L3 = clone(L1);
      L1= L1->next;
    } else if (L1->x ==  L2->x ){
      L3 = clone(L1);
      L1 = L1->next;
      L2= L2->next;
    } else {
      L3 = clone(L2);
      L2 = L2->next;
    }
  } else if (L1 !=  NULL and L2==NULL){
    L3 = clone(L1);
    L1 = L1->next;
  }else if (L1 ==  NULL and L2!=NULL){
    L3 = clone(L2);
    L2 = L2->next;
  } else {
    return NULL;
  }
  dList *head = L3;
  while (L1 != NULL || L2 != NULL){
    if (L1 != NULL and L2 != NULL){
      if (L1->x < L2->x){
        L3->next = clone(L1);
        L1= L1->next;
      } else if (L1->x ==  L2->x ){
        L3->next = clone(L1);
        L1 = L1->next;
        L2= L2->next;
      } else {
        L3->next = clone(L2);
        L2 = L2->next;
      }
    } else if (L1 !=  NULL and L2==NULL){
      L3->next = clone(L1);
      L1 = L1->next;
    }else if (L1 ==  NULL and L2!=NULL){
      L3->next = clone(L2);
      L2 = L2->next;
    }
    L3=L3->next;
  }
  return head;
}
