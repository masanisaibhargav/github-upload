#include<stdio.h>
int global1=0;
int main()
{
	int local1,local2;
	local1=5;
	local2=15;
	global1=local1+local2;
	printf("%d\n",global1);
	return 0;
}
