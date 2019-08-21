#include <stdio.h>

int main()
{
	int codigo1;
	int numero_pecas1;
	float valor_peca1;
	
	int codigo2;
	int numero_pecas2;
	float valor_peca2;
	
	scanf("%d %d %f",&codigo1,&numero_pecas1,&valor_peca1);
	scanf("%d %d %f",&codigo2,&numero_pecas2,&valor_peca2);
	
	printf("VALOR A PAGAR: R$ %.2f\n",(numero_pecas1*valor_peca1)+(numero_pecas2*valor_peca2));
	
	return 0;
}
