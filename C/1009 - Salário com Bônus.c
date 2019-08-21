#include <stdio.h>

int main()
{
	char nome[50];
	double salario;
	double tot_vendas;
	
	scanf("%s",&nome);
	scanf("%lf %lf",&salario,&tot_vendas);
	
	printf("TOTAL = R$ %.2lf\n",(tot_vendas*0.15)+salario);
	
	return 0;
}
