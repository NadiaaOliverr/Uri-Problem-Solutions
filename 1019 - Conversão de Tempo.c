/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
---Entrada---
O arquivo de entrada contém um valor inteiro N.
---Saída---
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/

#include <stdio.h>

int main()
{
	int N;
	
	int horas;
	int minutos;
	int segundos;
	
	scanf("%d",&N);
	
	horas = N/3600;
	minutos = N%3600;
	segundos = minutos%60;
	minutos = minutos/60;
	
	
	printf("%d:%d:%d\n",horas,minutos,segundos);
	
}
