#include "builtins.h"

void built_exit(void)
{
exit(0);
}

/*
void built_cd(const char* args[]){
    return;
}
*/

void built_pwd(void){
    char* cwd = getcwd(NULL, 0); //get working directory, NULL means allocate memory for the string, 0 means no limit on the size of the string
    if(cwd != NULL){
        printf("%s\n", cwd);
        free(cwd);
    } else {
        perror("failed to get current working directory");
    }
}