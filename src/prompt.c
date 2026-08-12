#include "prompt.h"

static void prompt(){
    char* user = getenv("USER");
    if(user == NULL){
        user = "Ashell";
    }

    char* cwd = getcwd(NULL, 0);
    char* final_cwd = "unknown";
  
    if(cwd != NULL){
        char* last_slash = strrchr(cwd, '/'); //finds the last slash in the cwd string

        final_cwd = last_slash + 1;

        if(*final_cwd == '\0'){
            final_cwd = "/";
        }
    }
    printf("%s %s>", user, final_cwd);

    free(cwd);
    }
    

char* inp()
{
//init
char* line = NULL;
size_t size = 0;

//input
prompt();
getline(&line, &size, stdin);

//free memory in main
return line;
}
