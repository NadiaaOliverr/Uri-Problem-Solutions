/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", 
indicando se os valores lidos são múltiplos entre si.
---Entrada---
A entrada contém valores inteiros.
---Saída---
A saída deve conter uma das mensagens conforme descrito acima.*/

#include <stdio.h>

int main()
{
	int A,B;
	
	scanf("%d %d",&A,&B);
	
	if(A%B==0 || B%A==0)
	{
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
	return 0;
}
