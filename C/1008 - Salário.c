#include <stdio.h>

int main()
{
	int numero_func,num_horas;
	float valor_hora;
	
	scanf("%d %d %f",&numero_func,&num_horas,&valor_hora);
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",numero_func,(valor_hora*num_horas));
	return 0;
}
