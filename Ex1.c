#include<stdio.h>
int main(){
	printf("Hello!\n");
	fork();	
	printf("Good Morning!\n");
	fork();
	printf("You are welcome!\n");
	return 0;
}
