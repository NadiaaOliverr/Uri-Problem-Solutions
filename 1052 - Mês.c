/*Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o m�s do ano por extenso, 
em ingl�s, com a primeira letra mai�scula.
---Entrada---
A entrada cont�m um �nico valor inteiro.
---Sa�da---
Imprima por extenso o nome do m�s correspondente ao n�mero existente na entrada, com a primeira letra em mai�scula.*/

#include <stdio.h>

int main()
{
	int mes;
	
	scanf("%d",&mes);
	
	if(mes==1){
		printf("January\n");
	}else if(mes==2){
		printf("February\n");
	}else if(mes==3){
		printf("March\n");
	}else if(mes==4){
		printf("April\n");
	}else if(mes==5){
		printf("May\n");
	}else if(mes==6){
		printf("June\n");
	}else if(mes==7){
		printf("July\n");
	}else if(mes==8){
		printf("August\n");
	}else if(mes==9){
		printf("September\n");
	}else if(mes==10){
		printf("October\n");
	}else if(mes==11){
		printf("November\n");
	}else if(mes==12){
		printf("December\n");
	}
}
