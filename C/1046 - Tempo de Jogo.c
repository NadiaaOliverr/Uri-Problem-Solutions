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
