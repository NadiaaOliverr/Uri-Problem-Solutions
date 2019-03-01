/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
MaiorAB = (a+b+abs(a-b))/2
---Entrada---
O arquivo de entrada contém três valores inteiros.
---Saída---
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
Sacada do exercício: Calcular duas vezes o maior valor uma vez com A e B e o resultado com o valor de C*/
#include <stdio.h>
#include <math.h>

int main()
{	
	int a,b,c;
	int MaiorAB;
	scanf("%d %d %d",&a,&b,&c);
	
	MaiorAB = (a+b+abs(a-b))/2;
	MaiorAB = (MaiorAB+c+abs(MaiorAB-c))/2;
	
	printf("%d eh o maior\n",MaiorAB);
	
	return 0;
}
