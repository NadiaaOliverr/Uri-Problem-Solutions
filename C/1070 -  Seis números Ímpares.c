/*Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o 
caso.
---Entrada---
A entrada será um valor inteiro positivo.
---Saída---
A saída será uma sequência de seis números ímpares.*/

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
