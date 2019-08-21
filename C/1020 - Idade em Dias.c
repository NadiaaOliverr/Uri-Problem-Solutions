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
