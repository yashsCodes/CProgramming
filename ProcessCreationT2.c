/*
=> fork returns 0 in the child process and a non-zero value in the parent process; this non-zero value is the child process' PID.
=> getpid returns the PID of the current process; current means whoever is calling the getpid function.
*/
#include <sys/types.h>
#include <stdio.h>
//#include <unistd.h>
int main() {
    pid_t pid, pid1;
    /* fork a child process */
    pid = fork();
    if (pid < 0) 
	{ /* error occurred */
        printf("processor not created\n");
        return 1;
    }
    else if (pid == 0) 
	{ /* child process */
        /*pid1 = getpid();
        printf("child: pid = %d\n",pid);
        printf("child: pid1 = %d\n",pid1);
		*/
		printf("Created Child Processor.\n");
    }
    else 
	{ /* parent process */
        /*pid1 = getpid();
        printf("parent: pid = %d\n",pid); 
        printf("parent: pid1 = %d\n",pid1);
        wait(NULL);
		*/
		printf("Still you are in the Parent processor.\n");
    }
    return 0;
}
/*
- processor not created 	value<0
- child processor			0
- parent processor			value>0
*/