/*Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.
--Entrada--
O arquivo de entrada contém 5 valores inteiros quaisquer.
--Saída---
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.*/

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
