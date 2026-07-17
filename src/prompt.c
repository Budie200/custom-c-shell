#include "prompt.h"

char* inp()
{
//init
char* line = NULL;
size_t size = 0;

//input
printf("Ashell>");
getline(&line, &size, stdin);

//free memory in main
return line;
}
