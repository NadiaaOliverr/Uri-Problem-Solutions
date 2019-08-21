#include <stdio.h>

int main()
{
	int dia_inicial,dia_final;
	int total_dias;
	int total_horas;
	int total_minutos;
	int total_segundos;
	
	int hora_inicial,minuto_inicial,segundo_inicial;
	int hora_final,minuto_final,segundo_final;
	
	scanf("Dia %d",&dia_inicial);
	scanf("%d : %d : %d\n",&hora_inicial,&minuto_inicial,&segundo_inicial);
	scanf("Dia %d",&dia_final);
	scanf("%d : %d : %d",&hora_final,&minuto_final,&segundo_final);
	
	total_dias = dia_final - dia_inicial;
	total_horas = hora_final - hora_inicial;
	total_minutos = minuto_final - minuto_inicial;
	total_segundos = segundo_final - segundo_inicial;
	
	if(total_horas<0){
		total_horas+=24;
		total_dias-=1;
	}
	if(total_minutos<0){
		total_minutos+=60;
		total_horas-=1;
	}
	if(total_segundos<0){
		total_segundos+=60;
		total_minutos-=1;
	}
	
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",total_dias,total_horas,total_minutos,total_segundos);
	return 0;
	
}
