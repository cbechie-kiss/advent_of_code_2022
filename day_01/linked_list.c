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

void initList(ptr_list this_list, unsigned int sortBySize,void (*sort_func_ptr)(ptr_list this_list, ptr_node new_node)){
    this_list->pHead = NULL;
    this_list->pTail = NULL;
    this_list->sortBySize = sortBySize;
    this_list->sort_func_ptr = sort_func_ptr;
}

void addNode(ptr_list this_list, ptr_node new_node){
    if(this_list->pHead == NULL){
        this_list->pHead = this_list->pTail = new_node;
        this_list->count++;
    }else{
        this_list->sort_func_ptr(this_list, new_node);
    }
}

void sortAscended(ptr_list this_list, ptr_node new_node){

    ptr_node current = this_list->pHead;
    bool isInserted = false;
    void* new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    void* c_data;

    while(current != NULL){
        memcpy(&c_data, current->data, this_list->sortBySize);
        if(new_data <= c_data){
            new_node->pPrev = current->pPrev;
            if(current->pPrev != NULL){
                current->pPrev->pNext = new_node;
            }
            new_node->pNext = current;
            current->pPrev= new_node;
            if(current == this_list->pHead){
                this_list->pHead = new_node;
            }
            this_list->count++;
            isInserted = true;
            break;
        }else{
            current = current->pNext;
        }
    }
    if(isInserted == false){
        this_list->pTail->pNext = new_node;
        new_node->pPrev = this_list->pTail;
        this_list->pTail = new_node;
        this_list->count++;
    }
}

void sortDescended(ptr_list this_list, ptr_node new_node){

    ptr_node current = this_list->pTail;
    bool isInserted = false;
    void* new_data;
    memcpy(&new_data, new_node->data, this_list->sortBySize);
    void* c_data;

    while(current != NULL){
        memcpy(&c_data, current->data, this_list->sortBySize);
        if(new_data <= c_data){
            new_node->pNext = current->pNext;
            if(current->pNext != NULL){
                current->pNext->pPrev = new_node;
            }
            new_node->pPrev = current;
            current->pNext= new_node;
            if(current == this_list->pTail){
                this_list->pTail = new_node;
            }
            isInserted = true;
            this_list->count++;
            break;
        }else{
            current = current->pPrev;
        }
    }
    if(isInserted == false){
        this_list->pHead->pPrev = new_node;
        new_node->pNext = this_list->pHead;
        this_list->pHead = new_node;
        this_list->count++;
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