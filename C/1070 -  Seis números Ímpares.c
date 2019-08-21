#include <stdio.h>

int main()
{
	int X,i,cont;
	scanf("%d",&X);
	
	i = X;
	cont =0;
	while(cont<6)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			cont++;	
		}
		i++;
	}
	return 0;
}
