#ifndef BUILTINS_H
#define BUILTINS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void built_exit(void);

void built_cd(const char* args[]);
void built_pwd(void);

void built_help(void);
void built_history(void);

#endif
