#include "executor.h"
#include "builtins.h"

static int builtIn(char* args[]){
if((strcmp(args[0], "exit")) == 0){
	built_exit();
	return 1;
}
if((strcmp(args[0], "cd")) == 0){
	built_cd(args);
	return 1;
}
if((strcmp(args[0], "pwd")) == 0){
	built_pwd();
	return 1;
}

return 0;
}

int exe(char* args[]){
	if(builtIn(args)){
		return 0;
}

	else{
		pid_t pid = fork();
		if(pid < 0){
			perror("failed");
}
		else if(pid == 0){
			execvp(args[0], args);
			perror("child failed");
			exit(1);
}
		else{
		wait(NULL);
}
}

return 0;
}


