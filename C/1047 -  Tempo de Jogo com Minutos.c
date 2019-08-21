#include <stdio.h>

int main()
{
	int hora_inicial,hora_final,minuto_inicial,minuto_final;
	int duracao_hora,duracao_minutos;
	
	do{
		scanf("%d %d",&hora_inicial,&minuto_inicial);
		scanf("%d %d",&hora_final,&minuto_final);
	}while(hora_inicial<0 || hora_final<0 || minuto_inicial<0 || minuto_final<0 || minuto_final>59 || minuto_inicial>59);
	
	duracao_hora = hora_final - hora_inicial;
	duracao_minutos = minuto_final - minuto_inicial;

	if(duracao_hora<0){ // Caso o tempo em horas seja menor que zero quer dizer que se passou um dia, ent�o, soma 24
		duracao_hora +=24;
	}
	
	if(duracao_minutos<0){ 
		duracao_minutos+=60;
		duracao_hora--; //Quando o minuto final � menor que o inicial, quer dizer que passaram apenas minutos
		//exemplo: 18:30 � 19:20, ent�o n�o se passou 1 hora e sim 50 minutos.
	}
	
	if(duracao_minutos==0 && duracao_hora==0){ //Foram iguais
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracao_hora,duracao_minutos);
	}
	 
	return 0;
}
