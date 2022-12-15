//
// Created by Carl Bechie on 12/14/22.
//
#include <stdio.h>
#include "error_handler.h"
#include "file_handler.h"

FILE* openFilePtr(char* filePath, char* mode){
    FILE* fp = fopen(filePath, mode);
    checkFilePtr(fp, filePath);
    return fp;
}

void checkFilePtr(FILE* fp, char* filePath){
    if(fp == NULL){
        errExit("Could no open file %s exiting now\n", filePath);
    }
}