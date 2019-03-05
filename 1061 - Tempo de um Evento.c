/*Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro
do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando 
termina o evento. Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a 
duração deste evento.
---Entrada---
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai 
começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e
quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.
---Saída---
Na saída, deve ser apresentada a duração do evento, no seguinte formato:
W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)
Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.*/

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
