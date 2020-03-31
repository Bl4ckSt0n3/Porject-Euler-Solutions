#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sum1=0, sum2=0;
	for(int i=1; i<=20; i++)
	{
		sum1 += (i*i);
		sum2 += i;
	}
	printf("%d\n",(sum2*sum2)-sum1);
	return 0;
}

