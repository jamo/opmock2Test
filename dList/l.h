typedef struct dList {
  int x;
  struct dList *next;
  struct dList *prev;
} dList;


dList* insertElementD(dList *L, dList *p, int value);

int printElementsD(dList *L);

dList* createElem(int value, dList *pr, dList *nx);

dList* createElemNo(int value);

dList* deleteElementD(dList *L, dList *p);

dList* getMin(dList *L);

dList* clone(dList *node);

void swap(dList *eka, dList *toka);

int orderListD(dList *L);

dList* mergeListsD(dList *L1, dList *L2);

