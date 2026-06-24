#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include "builtins.h"

int exe(char* args[]);

#endif

