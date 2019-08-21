#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *X,i,dentro_intervalo=0,fora_intervalo=0;
	int N;
	scanf("%d",&N);
	X = (int*)malloc(N*sizeof(int));
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&X[i]);
		if(X[i]>=10 && X[i]<=20)
		{
			dentro_intervalo++;	
		}else{
			fora_intervalo++;
		}
	}
	printf("%d in\n%d out\n",dentro_intervalo,fora_intervalo);
	return 0;
}
