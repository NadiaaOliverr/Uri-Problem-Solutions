/*Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. 
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. 
Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
---Entrada---
O arquivo de entrada contém um valor inteiro.
--Saída---
Imprima a saída conforme exemplo fornecido.*/

#include <stdio.h>

int main()
{
	int idade;
	int ano;
	int dia;
	int mes;
	
	scanf("%d",&idade);
	
	ano = idade/365;
	mes = (idade - (365 * ano))/30;
	dia = (idade - (365*ano) - (30 * mes));
	
	printf("%d ano(s)\n",ano);
	printf("%d mes(es)\n",mes);
	printf("%d dia(s)\n",dia);
	
	return 0;
}
