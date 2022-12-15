//
// Created by Carl  on 12/14/22.
//

#ifndef ADVENT_OF_CODE_2022_LINKED_LIST_H
#define ADVENT_OF_CODE_2022_LINKED_LIST_H
#include <stdio.h>
#include <stdbool.h>

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

struct __attribute__((__packed__)) LIST{
    ptr_node pHead;
    ptr_node pTail;
    int count;
    unsigned int sortBySize;
    void (*sort_func_ptr)(ptr_list this_list, ptr_node new_node);
};

void initNode(ptr_node this_node, ptr_generic data);
void initList(ptr_list this_list, unsigned int sortBySize,void (*sort_func_ptr)(ptr_list this_list, ptr_node new_node));
void addNode(ptr_list this_list, ptr_node new_node);
void sortAscended(ptr_list this_list, ptr_node new_node);
void sortDescended(ptr_list this_list, ptr_node new_node);
void addFifo(ptr_list this_list, ptr_node new_node);
void addLifo(ptr_list this_list, ptr_node new_node);
void removeNode(ptr_list this_list, ptr_node this_node);





#endif //ADVENT_OF_CODE_2022_LINKED_LIST_H
