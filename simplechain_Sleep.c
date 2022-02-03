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
char *pParam = NULL;
int c;

while ((c = getopt (argc, argv, "p:")) != -1)
	switch (c)
    {
		case 'p':
			pParam = optarg;
			break;
		case '?':
			return 1;
		default:
			abort ();
    }

n = atoi (pParam);
for (i = 1; i < n; i++) 
        if (childpid = fork()) 
                break;  

sleep(10);
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
i, (long)getpid(), (long)getppid(), (long)childpid);
return 0;
}
