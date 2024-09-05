//Creating child process

#include<stdio.h>
int main(){
	fork();	//creates a child process identical to it parent process
	fork();
	printf("Hello!\n");
	return 0;
}
