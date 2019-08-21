#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int cem;
	int cinquenta;
	int vinte;
	int dez;
	int cinco;
	int dois;
	int um;
	
	cem = N/100;
	cinquenta = (N-(cem*100))/50;
	vinte = (N-(cem*100)-(cinquenta*50))/20;
	dez =  (N-(cem*100)-(cinquenta*50)-(vinte*20))/10;
	cinco = (N-(cem*100)-(cinquenta*50)-(vinte*20)-(dez*10))/5;
	dois = (N-(cem*100)-(cinquenta*50)-(vinte*20)-(dez*10)-(cinco*5))/2;
	um = (N-(cem*100)-(cinquenta*50)-(vinte*20)-(dez*10)-(cinco*5)-(dois*2))/1;
	
	printf("%d\n",N);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinquenta);
	printf("%d nota(s) de R$ 20,00\n",vinte);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinco);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",um);
		
	return 0;
}
