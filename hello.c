#include<stdio.h>

void microkernel_sendmsg(char *a)
{
	printf("microkernel:%s\n",a);
}

void main()
{
	printf("Helloworld\n");
	microkernel_sendmsg("is more portable");
}
