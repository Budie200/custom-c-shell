#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

#include "parser.h"
#include "executor.h"
#include "prompt.h"

int main(void){
while(1)
{
char* input  = inp();
char** tokenized_inp = token(input);

if(tokenized_inp[0] == NULL){
	free(input);
	free(tokenized_inp);
	continue;
}

exe(tokenized_inp);

free(input);
free(tokenized_inp);
}

return 0;
}
