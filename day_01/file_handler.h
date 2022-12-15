//
// Created by Carl Bechie on 12/14/22.
//

#ifndef ADVENT_OF_CODE_2022_FILE_HANDLER_H
#define ADVENT_OF_CODE_2022_FILE_HANDLER_H
#include <stdio.h>

FILE* openFilePtr(char* filePath, char* mode);
void checkFilePtr(FILE* fp, char* filePath);

#endif //ADVENT_OF_CODE_2022_FILE_HANDLER_H
