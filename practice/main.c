#include<stdio.h>


int main() {

	int pid = fork();


	if (pid == 0) {
	
		printf("procss with pid: %d is a father process", pid);
	}
	else {
		printf("process with pid: %d is a son process", pid);
	
	}



	return 0;
}