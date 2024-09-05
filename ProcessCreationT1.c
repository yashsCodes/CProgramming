#include<stdio.h>
int main(){
	printf("Hello!\n");
	int id=fork();	
	//printf("My process id is %d\n",getpid());
	printf("My process id is %d\n",id);
	return 0;
} 
/*
- processor not created 	value<0
- child processor			0
- parent processor			value>0
*/