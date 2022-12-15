//
// Created by Carl on 12/14/22.
//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "linked_list.h"
#include "error_handler.h"

void initNode(ptr_node this_node, ptr_generic data){
    this_node->pNext = NULL;
    this_node->pPrev = NULL;
    this_node->data = data;
}

void initList(ptr_list this_list, bool isQueue, bool isFifo, bool isSorted, bool isAscended, unsigned int sortBySize, char sortType){
    this_list->pHead = NULL;
    this_list->pTail = NULL;
    this_list->isQueue = isQueue;
    this_list->isFifo = isFifo;
    this_list->isSorted = isSorted;
    this_list->isAscended = isAscended;
    this_list->sortBySize = sortBySize;
    this_list->sortType = sortType;
}

void addNode(ptr_list this_list, ptr_node new_node){
    if(this_list->pHead == NULL){
        this_list->pHead = this_list->pTail = new_node;
        this_list->count++;
    }else if(this_list->isSorted){
        selectSort(this_list, new_node);
    }else{
        selectQueue(this_list, new_node);
    }
}

void selectSort(ptr_list this_list, ptr_node new_node){
    if(this_list->isAscended){
        selectAscended(this_list, new_node);
    }else{
        selectDescended(this_list, new_node);
    }
}

void selectAscended(ptr_list this_list, ptr_node new_node){
    switch (this_list->sortType) {
        case 'x':// string
            addStringAscended(this_list, new_node);
            break;
        case 'c':// char
            addCharAscended(this_list, new_node);
            break;
        case 'C':// unsigned char
            addUCharAscended(this_list, new_node);
            break;
        case 's':// short
            addShortAscended(this_list, new_node);
            break;
        case 'S':// unsigned short
            addUShortAscended(this_list, new_node);
            break;
        case 'i':// int
            addIntAscended(this_list, new_node);
            break;
        case 'I':// unsigned int
            addUIntAscended(this_list, new_node);
            break;
        case 'l':// long
            addLongAscended(this_list, new_node);
            break;
        case 'L':// unsigned long
            addULongAscended(this_list, new_node);
            break;
        case 'f':// float
            addFloatAscended(this_list, new_node);
            break;
        case 'd':// double
            addDoubleAscended(this_list, new_node);
            break;
        default:
            errExit("Error selectAscended\n");
    }
}

void selectDescended(ptr_list this_list, ptr_node new_node){
    switch (this_list->sortType) {
        case 'x':// string
            addStringDescended(this_list, new_node);
            break;
        case 'c':// char
            addCharDescended(this_list, new_node);
            break;
        case 'C':// unsigned char
            addUCharDescended(this_list, new_node);
            break;
        case 's':// short
            addShortDescended(this_list, new_node);
            break;
        case 'S':// unsigned short
            addUShortDescended(this_list, new_node);
            break;
        case 'i':// int
            addIntDescended(this_list, new_node);
            break;
        case 'I':// unsigned int
            addUIntDescended(this_list, new_node);
            break;
        case 'l':// long
            addLongDescended(this_list, new_node);
            break;
        case 'L':// unsigned long
            addULongDescended(this_list, new_node);
            break;
        case 'f':// float
            addFloatDescended(this_list, new_node);
            break;
        case 'd':// double
            addDoubleDescended(this_list, new_node);
            break;
        default:
            errExit("Error selectAscended\n");
    }
}

void addStringAscended(ptr_list this_list, ptr_node new_node){
    // Add a string to the list from smallest to largest
    char* new_string = (char*)calloc(1, this_list->sortBySize);

    memcpy(&new_string, new_node->data, this_list->sortBySize);

    bool isInserted = false;
    ptr_node current = this_list->pHead;
    char* c_string = (char*)calloc(1, this_list->sortBySize);//current string

    while(current != NULL){
        memcpy(c_string, current->data, this_list->sortBySize);
        if(strcmp(new_string, c_string) <= 0){
          //  ADD_NODE_BEFORE
        }else{
            current = current->pNext;
        }
    }

  //  REPLACE_TAIL_DURING_SORT

    free(c_string);
    free(new_string);
}

void addStringDescended(ptr_list this_list, ptr_node new_node){
    // Add a string to the list from largest to smallest
    char* new_string = (char*)calloc(1, this_list->sortBySize);

    memcpy(&new_string, new_node->data, this_list->sortBySize);

    bool isInserted = false;
    ptr_node current = this_list->pHead;
    char* c_string = (char*)calloc(1, this_list->sortBySize);//current string

    while(current != NULL){
        memcpy(c_string, current->data, this_list->sortBySize);
        if(strcmp(new_string, c_string) >= 0){
      //      ADD_NODE_AFTER
        }else{
            current = current->pNext;
        }
    }

  //  REPLACE_HEAD_DURING_SORT

    free(c_string);
    free(new_string);
}

void addCharAscended(ptr_list this_list, ptr_node new_node){
    // Add a char to the list from smallest to largest
    char new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    char c_data; // current char
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addCharDescended(ptr_list this_list, ptr_node new_node){
    // Add a char to the list from largest to smallest
    char new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    char c_data; // current char
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addUCharAscended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned char to the list from smallest to largest
    unsigned char new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    unsigned char c_data; // current unsigned char
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addUCharDescended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned char to the list from largest to smallest
    unsigned char new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    unsigned char c_data; // current unsigned char
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addShortAscended(ptr_list this_list, ptr_node new_node){
    // Add a short to the list from smallest to largest
    short new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    short c_data; // current short
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addShortDescended(ptr_list this_list, ptr_node new_node){
    // Add a short to the list from largest to smallest
    short new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    short c_data; // current short
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addUShortAscended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned short to the list from smallest to largest
    unsigned short new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    unsigned short c_data; // current unsigned short
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addUShortDescended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned short to the list from largest to smallest
    unsigned short new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    unsigned short c_data; // current unsigned short
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addIntAscended(ptr_list this_list, ptr_node new_node) {
    // Add an int to the list from smallest to largest
    int new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    int c_data; // current int
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addIntDescended(ptr_list this_list, ptr_node new_node){
    // Add an int to the list from largest to smallest
    int new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    int c_data; // current int
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addUIntAscended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned int to the list from smallest to largest
    unsigned int new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    unsigned int c_data; // current unsigned int
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addUIntDescended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned int to the list from largest to smallest
    unsigned int new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    unsigned int c_data; // current unsigned int
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addLongAscended(ptr_list this_list, ptr_node new_node){
    // Add a long to the list from smallest to largest
    long new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    long c_data; // current long
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addLongDescended(ptr_list this_list, ptr_node new_node){
    // Add a long to the list from largest to smallest
    long new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    long c_data; // current long
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addULongAscended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned long to the list from smallest to largest
    unsigned long new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    unsigned long c_data; // current unsigned long
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addULongDescended(ptr_list this_list, ptr_node new_node){
    // Add an unsigned long to the list from largest to smallest
    unsigned long new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    unsigned long c_data; // current unsigned long
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addFloatAscended(ptr_list this_list, ptr_node new_node){
    // Add a float to the list from smallest to largest
    float new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    float c_data; // current float
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addFloatDescended(ptr_list this_list, ptr_node new_node){
    // Add a float to the list from largest to smallest
    float new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    float c_data; // current float
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void addDoubleAscended(ptr_list this_list, ptr_node new_node){
    // Add a double to the list from smallest to largest
    double new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pHead;
    double c_data; // current double
    SORT_NUMBER_ASCENDED(c_data, new_data)
}

void addDoubleDescended(ptr_list this_list, ptr_node new_node){
    // Add a double to the list from largest to smallest
    double new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    bool isInserted = false;
    ptr_node current = this_list->pTail;
    double c_data; // current double
    SORT_NUMBER_DESCENDED(c_data, new_data)
}

void selectQueue(ptr_list this_list, ptr_node new_node){
    if(this_list->isFifo){
        addFifo(this_list, new_node);
    }else{
        addLifo(this_list, new_node);
    }
}

void addFifo(ptr_list this_list, ptr_node new_node){
    this_list->pTail->pNext = new_node;
    new_node->pPrev = this_list->pTail;
    this_list->pTail = new_node;
}

void addLifo(ptr_list this_list, ptr_node new_node){
    this_list->pHead->pPrev = new_node;
    new_node->pNext = this_list->pHead;
    this_list->pHead = new_node;
}

void removeNode(ptr_list this_list, ptr_node this_node){
    if(this_node == this_list->pTail){
        this_list->pTail = this_node->pPrev;
        this_node->pPrev = NULL;
        if(this_list->pTail != NULL) {
            this_list->pTail->pNext = NULL;
        }
    }else if(this_node == this_list->pHead){
        this_list->pHead = this_node->pNext;
        this_node->pNext = NULL;
        if(this_list->pHead != NULL){
            this_list->pHead->pPrev = NULL;
        }
    }else{
        this_node->pPrev->pNext = this_node->pNext;
        this_node->pNext->pPrev = this_node->pPrev;
        this_node->pNext = NULL;
        this_node->pPrev = NULL;
    }
}