#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
	if ( fork() == 0) {
		printf("I am a child.  %d\n",getpid() );
	} else {
		printf("I am a parent. %d\n",getpid() );
	}
}
