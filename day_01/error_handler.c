//
// Created by Carl Bechie on 12/14/22.
//
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "error_handler.h"


void errExit(const char* fmt, ...){
    va_list  args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    fputc('\n', stderr);
    va_end(args);
    exit(-1);
}


