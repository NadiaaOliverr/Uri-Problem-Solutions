#include <stdio.h>

int main()
{
	int N[5],i,cont=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&N[i]);
		if(N[i]%2==0){
			cont++;
		}
	}
	printf("%d valores pares\n",cont);
	return 0;
}
