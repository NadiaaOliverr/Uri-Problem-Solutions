#include <stdio.h>

int main()
{
	int N;
	
	int horas;
	int minutos;
	int segundos;
	
	scanf("%d",&N);
	
	horas = N/3600;
	minutos = N%3600;
	segundos = minutos%60;
	minutos = minutos/60;
	
	
	printf("%d:%d:%d\n",horas,minutos,segundos);
	
}
