/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um 
dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
---Entrada---
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
---Saída---
Apresente a duração do jogo conforme exemplo abaixo.*/

#include <stdio.h>

int main()
{
	int hora_inicial,hora_final;
	int duracao;
	
	do{
		scanf("%d %d",&hora_inicial,&hora_final);
	}while(hora_inicial<0 || hora_final<0);
	
	if(hora_inicial>=hora_final){
	duracao = 24 - hora_inicial + hora_final;
	printf("O JOGO DUROU %d HORA(S)\n",duracao);
	}else{
	duracao = hora_final - hora_inicial;
	printf("O JOGO DUROU %d HORA(S)\n",duracao);
	}
	return 0;
}
