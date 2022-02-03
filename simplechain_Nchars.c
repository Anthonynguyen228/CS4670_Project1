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
int c, i, j, n;
char errMessage[80];   
char *pParam = NULL;
char *cParam = NULL;
int w;
char* mybuf[80];
int nchars;

while ((w = getopt (argc, argv, "p:c:")) != -1)
	switch (w)
    {
		case 'p':
			pParam = optarg;
			break;
		case 'c':
			cParam = optarg;
			break;
		case '?':
			return 1;
		default:
			abort ();
    }

n = atoi (pParam);
c = atoi (cParam);
for (i = 1; i < n; i++) 
        if (childpid = fork()) 
                break;  
for(j = 0; j < c; j++)
{
	mybuf[j] = getchar();
}
mybuf[c] = '\0';
fprintf(stderr, "process ID:%ld %s\n", (long)getpid(), mybuf);
return 0;
}
