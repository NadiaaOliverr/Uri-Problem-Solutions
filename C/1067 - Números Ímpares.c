#include <stdio.h>

int main()
{
	int X,i;
	scanf("%d",&X);
	for(i=0;i<=X;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
}
