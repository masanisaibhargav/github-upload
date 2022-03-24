#include<stdio.h>
void test(int k);
int main()
{
	int i=0;
	printf("the address of i is %x\n",&i);
	test (i);
	printf("the address of i is %x\n",&i);
	test (i);
	return 0;
}
void test(int k)
{
	printf("the address of k is %x\n",&k);
}
