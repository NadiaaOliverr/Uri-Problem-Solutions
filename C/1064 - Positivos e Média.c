#include <stdio.h>
#include <stdlib.h>
int main()
{
	float vetor[6];
	int i,cont=0;
	float media=0,soma=0;
	float *guarda_valor;
	
	for(i=0;i<6;i++){
		scanf("%f",&vetor[i]);
		if(vetor[i]>0.0){
			cont++;
		}
	}
	guarda_valor = (float*)malloc(cont * sizeof(float));
	
	for(i=0;i<6;i++)
	{
		if(vetor[i]>0.0){
			guarda_valor[i] = vetor[i];
			soma+=guarda_valor[i];
		}
	}
	media = soma/cont;
	
	printf("%d valores positivos\n",cont);
	printf("%.1f\n",media);
	return 0;
}

