#include <stdio.h>

int main()
{
	int vetor[5];
	int i,pares,impares,negativos,positivos;
	i = pares = impares = negativos = positivos = 0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&vetor[i]);
		if(vetor[i]%2!=0){
			impares++;
		}else if(vetor[i]%2==0){
			pares++;
		}if(vetor[i]>0){
			positivos++;
		}else if(vetor[i]<0){
			negativos++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",pares,impares,positivos,negativos);	
	return 0;
}
