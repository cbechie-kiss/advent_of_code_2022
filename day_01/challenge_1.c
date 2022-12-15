#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../advent_lib/file_handler.h"
#include "../advent_lib/error_handler.h"
#include "../advent_lib/linked_list.h"

#define FILE_NAME "./challenge_1_input.txt"
#define ACCESS_ELF_DATA ((ptr_elf)current->data)

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
    initList(elfList, sizeof(int), &pushDescOrd);

    while(!feof(fp)){
        char* str = (char*)calloc(1,30);
        ptr_elf this_elf = (ptr_elf) calloc(1, sizeof(elf));
        initElf(this_elf, elfList->count);

        while(str[0] != '\n' && !feof(fp)) {
            fgets(str, sizeof(str), fp);
            int calories = atoi(str);
            this_elf->totalCal += calories;
        }

        ptr_node elf_node = (ptr_node) calloc(1, sizeof(node));
        initNode(elf_node, this_elf);
        push(elfList, elf_node);
    }

    fclose(fp);
    ptr_node current = elfList->pHead;
    int mostCals = ACCESS_ELF_DATA->totalCal;
    int total = 0;
    for(int i = 0; i < 3; i++){
        total += ACCESS_ELF_DATA->totalCal;
        current = current->pNext;
    }
    printf("Part 1: %d \n", mostCals);
    printf("Part 2: %d \n", total);

    return 0;
}

void initElf(ptr_elf this_elf, int id){
    this_elf->id = id;
    this_elf->totalCal = 0;
}