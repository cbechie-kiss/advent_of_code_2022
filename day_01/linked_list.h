//
// Created by Carl  on 12/14/22.
//

#ifndef ADVENT_OF_CODE_2022_LINKED_LIST_H
#define ADVENT_OF_CODE_2022_LINKED_LIST_H
#include <stdio.h>
#include <stdbool.h>

#define ADD_NODE_BEFORE(c_data, new_data) \
new_node->pNext = current;\
new_node->pPrev = current->pPrev;\
current->pPrev = new_node;\
if(current == this_list->pHead){\
    this_list->pHead = new_node;\
}                       \
this_list->count++;\
isInserted = true;      \
printf("Switched: %d & %d \n", c_data, new_data);\
break;


#define ADD_NODE_AFTER(c_data, new_data)  \
new_node->pNext = current->pNext; \
if(current->pNext != NULL){                       \
    current->pNext->pPrev = new_node; \
}\
new_node->pPrev = current;\
current->pNext= new_node;\
if(current == this_list->pTail){  \
    printf("NEW TAILS %p : %p  %d : %d \n", current, this_list->pTail, new_data, c_data);                   \
    this_list->pTail = new_node;\
}\
isInserted = true;     \
this_list->count++;\
break;

#define REPLACE_TAIL_DURING_SORT(c_data, new_data) \
if(isInserted == false){         \
    this_list->pTail->pNext = new_node;\
    new_node->pPrev = this_list->pTail;\
    this_list->pTail = new_node; \
    this_list->count++;          \
printf("NEW TAILS %d : %d \n", new_data, c_data); \
}

#define REPLACE_HEAD_DURING_SORT(c_data, new_data) \
if(isInserted == false){         \
    this_list->pHead->pPrev = new_node;\
    new_node->pNext = this_list->pHead;\
    this_list->pHead = new_node; \
    this_list->count++;\
}

#define CHECK_IS_BEFORE(c_data, new_data) \
if(new_data >= c_data){                   \
    ADD_NODE_BEFORE(c_data, new_data)                       \
    \
}else{\
    current = current->pNext;\
}

#define CHECK_IS_AFTER(c_data, new_data)  \
if(new_data <= c_data){                   \
ADD_NODE_AFTER(c_data, new_data) \
}else{                                    \
current = current->pNext;\
}

#define SORT_NUMBER_ASCENDED(c_data, new_data)  \
while(current != NULL){\
    memcpy(&c_data, current->data, this_list->sortBySize);\
    CHECK_IS_BEFORE(c_data, new_data)\
}\
REPLACE_HEAD_DURING_SORT(c_data, new_data)

#define SORT_NUMBER_DESCENDED(c_data, new_data) \
while(current != NULL){ \
memcpy(&c_data, current->data, this_list->sortBySize);\
CHECK_IS_AFTER(c_data, new_data)\
}\
REPLACE_TAIL_DURING_SORT(c_data, new_data)

typedef struct __attribute__((__packed__)) NODE node;
typedef struct __attribute__((__packed__)) NODE* ptr_node;

typedef struct __attribute__((__packed__)) LIST list;
typedef struct __attribute__((__packed__)) LIST* ptr_list;

typedef void* ptr_generic;

struct __attribute__((__packed__)) NODE{
    ptr_node pNext;
    ptr_node pPrev;
    ptr_generic data;

};

/*
    Within the data of each node the first item must be the var that is
    used to sort the list.

    Sort type key:
    x = string
    c = char
    C = unsigned char
    s = short
    S = unsigned short
    i = int
    I = unsigned int
    l = long
    L = unsigned long
    f = float
    d = double
 */
struct __attribute__((__packed__)) LIST{
    ptr_node pHead;
    ptr_node pTail;
    int count;
    bool isQueue;
    bool isFifo;
    bool isSorted;
    bool isAscended;
    unsigned int sortBySize;
    char sortType;
};

void initNode(ptr_node this_node, ptr_generic data);
void initList(ptr_list this_list, bool isQueue, bool isFifo, bool isSorted, bool isAscended, unsigned int sortBySize, char sortType);
void addNode(ptr_list this_list, ptr_node new_node);
void selectSort(ptr_list this_list, ptr_node new_node);
void selectAscended(ptr_list this_list, ptr_node new_node);
void selectDescended(ptr_list this_list, ptr_node new_node);
void addStringAscended(ptr_list this_list, ptr_node new_node);
void addStringDescended(ptr_list this_list, ptr_node new_node);
void addCharAscended(ptr_list this_list, ptr_node new_node);
void addCharDescended(ptr_list this_list, ptr_node new_node);
void addUCharAscended(ptr_list this_list, ptr_node new_node);
void addUCharDescended(ptr_list this_list, ptr_node new_node);
void addShortAscended(ptr_list this_list, ptr_node new_node);
void addShortDescended(ptr_list this_list, ptr_node new_node);
void addUShortAscended(ptr_list this_list, ptr_node new_node);
void addUShortDescended(ptr_list this_list, ptr_node new_node);
void addIntAscended(ptr_list this_list, ptr_node new_node);
void addIntDescended(ptr_list this_list, ptr_node new_node);
void addUIntAscended(ptr_list this_list, ptr_node new_node);
void addUIntDescended(ptr_list this_list, ptr_node new_node);
void addLongAscended(ptr_list this_list, ptr_node new_node);
void addLongDescended(ptr_list this_list, ptr_node new_node);
void addULongAscended(ptr_list this_list, ptr_node new_node);
void addULongDescended(ptr_list this_list, ptr_node new_node);
void addFloatAscended(ptr_list this_list, ptr_node new_node);
void addFloatDescended(ptr_list this_list, ptr_node new_node);
void addDoubleAscended(ptr_list this_list, ptr_node new_node);
void addDoubleDescended(ptr_list this_list, ptr_node new_node);
void selectQueue(ptr_list this_list, ptr_node new_node);
void addFifo(ptr_list this_list, ptr_node new_node);
void addLifo(ptr_list this_list, ptr_node new_node);
void removeNode(ptr_list this_list, ptr_node this_node);





#endif //ADVENT_OF_CODE_2022_LINKED_LIST_H
