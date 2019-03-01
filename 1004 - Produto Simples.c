/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. 
A seguir mostre a variável PROD com mensagem correspondente.   
---Entrada---
O arquivo de entrada contém 2 valores inteiros.
---Saída---
Imprima a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. 
Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.*/

#include <stdio.h>
int main()
{
	int A,B;
	int PROD;
	scanf("%d",&A);
	scanf("%d",&B);
	
	PROD = A*B;
	
	printf("PROD = %d\n",PROD);
	
	return 0;	
}
