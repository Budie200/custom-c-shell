#include "parser.h"

char** token(char* line)
{
int i = 0;
int pos = strcspn(line, "\n"); //counts the characters leading up to \n
line[pos] = '\0';

const char delim[] = "	 ";

//free this
char** out = (char**) malloc(64 * sizeof(char*));

char* word =  strtok(line, delim);
while (word != NULL) {
	out[i] = word;
        word = strtok(NULL, delim);
	i++;

	if(i >= 63){
		perror("exceeded array size");
		break;
}

    }

if(word == NULL){
	out[i] = NULL;
}

//free in main
return out;
}
