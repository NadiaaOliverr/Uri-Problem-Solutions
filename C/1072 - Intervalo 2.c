/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.
---Entrada---
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
---Saída---
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.*/

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
