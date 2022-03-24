#include<stdio.h>
int main()
{
	int score=0;
	if(score>=90)
	printf("%s","top 10%\n");
	else if (score>=75)
	printf("%s","top 20%\n");
	else if (score>=50)
	printf("%s","passed.\n");
	else
	printf("%s","fail.\n");
	return 0;
	
	}
