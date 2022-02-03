/*
CS_4760
Anthony Nguyen
01/25/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>

int main (int argc, char *argv[]) {  
pid_t childpid = 0;
int i, n;
char errMessage[80];   
char *pProcs = NULL;
int c;

while ((c = getopt (argc, argv, "p:")) != -1)
	switch (c)
    {
		case 'p':
			pProcs = optarg;
			break;
		case '?':
			return 1;
		default:
			abort ();
    }

n = atoi (pProcs);
for (i = 1; i < n; i++) 
        if (childpid = fork()) 
                break;  
fprintf(stderr, "i:%d ",i);
fprintf(stderr, "process ID:%ld ",(long)getpid());
fprintf(stderr, "parent ID:%ld ", (long)getppid());
fprintf(stderr, "child ID:%ld\n", (long)childpid);
return 0;
}
