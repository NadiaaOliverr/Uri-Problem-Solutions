#include <stdio.h>

int main()
{
	float valores[6];
	int i;
	int positivos=0;
		
	for(i=0;i<6;i++)
	{
		do{
		scanf("%f",&valores[i]);
		}while(valores[i]==0.0);
		if(valores[i]>0.0){
			positivos++;
		}	
	}
	
	printf("%d valores positivos\n",positivos);
	return 0;	
}
