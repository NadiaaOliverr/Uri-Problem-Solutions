#include <stdio.h>
#include <math.h>
int main()
{
	float N;
	scanf("%f",&N);
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
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",cem);
	printf("%d nota(s) de R$ 50.00\n",cinquenta);
	printf("%d nota(s) de R$ 20.00\n",vinte);
	printf("%d nota(s) de R$ 10.00\n",dez);
	printf("%d nota(s) de R$ 5.00\n",cinco);
	printf("%d nota(s) de R$ 2.00\n",dois);
	
	float valor;
	valor = N - floor(N);	
	valor = (float)round(valor*100)/100.0;
	
	
	
	int cinquenta_cents;
	int vinte_cincocents;
	int dez_cents;
	int cinco_cents;
	float um_cents;
	
	cinquenta_cents = valor/0.50;
	vinte_cincocents = (valor - (cinquenta_cents*0.50))/0.25;
	dez_cents = (valor - (cinquenta_cents*0.50)-(vinte_cincocents*0.25) )/0.10;
	cinco_cents = (valor - (cinquenta_cents*0.50)-(vinte_cincocents*0.25)-(dez_cents*0.10) )/0.05;
	um_cents = (valor - (cinquenta_cents*0.50)-(vinte_cincocents*0.25)-(dez_cents*0.10)- (cinco_cents*0.05) )/0.01;
	
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",um);
	printf("%d moeda(s) de R$ 0.50\n",cinquenta_cents);
	printf("%d moeda(s) de R$ 0.25\n",vinte_cincocents);
	printf("%d moeda(s) de R$ 0.10\n",dez_cents);
	printf("%d moeda(s) de R$ 0.05\n",cinco_cents);
	printf("%.0f moeda(s) de R$ 0.01\n",um_cents);
	
	
		
	return 0;
}
