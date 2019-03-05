/*Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, 
quantos valores digitados foram positivos e quantos valores digitados foram negativos.
---Entrada---
O arquivo de entrada contém 5 valores inteiros quaisquer.
---Saída---
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.*/

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
