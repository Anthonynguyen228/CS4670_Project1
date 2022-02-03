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
int k, j, n, s, i;
char errMessage[80];   
char *pProcs = NULL;
char *sParam = NULL;
char *iParam = NULL;
int c;

while ((c = getopt (argc, argv, "p:s:i:")) != -1)
	switch (c)
    {
		case 'p':
			pProcs = optarg;
			break;
		case 's':
			sParam = optarg;
			break;
		case 'i':
			iParam = optarg;
			break;
		case '?':
			return 1;
		default:
			abort ();
    }

n = atoi (pProcs);
s = atoi (sParam);
i = atoi (iParam);
for (k = 1; k < n; k++) 
        if (childpid = fork()) 
                break;  
for(j = 0; j < i; j++)
{
	fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
	k, (long)getpid(), (long)getppid(), (long)childpid);
	sleep(s);
}
return 0;
}
