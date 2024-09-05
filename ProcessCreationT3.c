#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main(){
	int A,B,C,D,E;
	B=fork();

	if(B<0){	
		printf("Fork failes! No child processor created");
		return -1;
	}
	else if(B==0){	
		printf("I'm child_1 (B)! My pid is %d Ppid is %d\n",getpid(),getppid());
		D=fork();
		if(D==0)
		{
			printf("I'm child_3 (D)! My pid is %d Ppid is %d\n",getpid(),getppid());
			
		}
		else{
			E=fork();
			if(E==0)
			{
				printf("I'm child_4 (E)! My pid is %d Ppid is %d\n",getpid(),getppid());
			}
		}
	}
	else{	
		//wait();
		printf("I'm Parent (A)! My pid is %d Ppid is %d\n",getpid(),getppid());
		C=fork();
		if(C==0){
			printf("I'm child_2 (C)! My pid is %d Ppid is %d\n",getpid(),getppid());
			
		}
		
		
	}


	return 0;
}