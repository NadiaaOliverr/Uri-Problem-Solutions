#include <stdio.h>

int main()
{
	int codigo, quantidade;
	float total;
	scanf("%d",&codigo);
	scanf("%d",&quantidade);
	if(codigo==1)
	{
		total = 4.00*quantidade;	
	}else if(codigo==2){
		total = 4.50*quantidade;
	}else if(codigo==3){
		total = 5.00*quantidade;
	}else if(codigo==4)
	{
		total = 2.00*quantidade;
	}else if(codigo==5)
	{
		total = 1.50*quantidade;
	}
	
	printf("Total: R$ %.2f\n",total);
	
	return 0;
}
