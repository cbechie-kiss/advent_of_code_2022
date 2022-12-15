#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "file_handler.h"
#include "error_handler.h"
#include "linked_list.h"

#define FILE_NAME "/Users/carlbechie/Dev/advent_of_code_2022/day_01/challenge_1_input.txt"

typedef struct __attribute__((__packed__)) ELF elf;
typedef struct __attribute__((__packed__)) ELF* ptr_elf;

struct __attribute__((__packed__)) ELF{
    int totalCal;
    int id;
};

void initElf(ptr_elf this_elf, int id);

int main(){
    FILE* fp = openFilePtr(FILE_NAME, "r");
    ptr_list elfList = (ptr_list) calloc(1, sizeof(list));
    initList(elfList, false, false, true, false, sizeof(int), 'i');


    while(!feof(fp)){
        char* str = (char*)calloc(1,30);
        ptr_elf this_elf = (ptr_elf) calloc(1, sizeof(elf));
        initElf(this_elf, elfList->count);

        while(str[0] != '\n' && !feof(fp)) {
            fgets(str, sizeof(str), fp);
            int *calories = calloc(1, sizeof(int));
            *calories = atoi(str);
            this_elf->totalCal += *calories;
        }

        ptr_node elf_node = (ptr_node) calloc(1, sizeof(node));
        initNode(elf_node, this_elf);
        addNode(elfList, elf_node);
    }

    fclose(fp);
    ptr_node current = elfList->pHead;
    while(current != NULL){
        printf("%d: %d \n", ((ptr_elf)current->data)->id,  ((ptr_elf)current->data)->totalCal);
        current = current->pNext;
    }

    return 0;
}

void initElf(ptr_elf this_elf, int id){
    this_elf->id = id;
    this_elf->totalCal = 0;
}