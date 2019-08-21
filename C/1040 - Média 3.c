#include <stdio.h>

int main()
{
	float N1,N2,N3,N4;
	float media;
	float media_final;
	float nota_exame;
	
	scanf("%f",&N1);
	scanf("%f",&N2);
	scanf("%f",&N3);
	scanf("%f",&N4);
	
	media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
	
	if(media>=5 && media<=6.9){
		scanf("%f",&nota_exame);
		media_final = (nota_exame+media)/2;
	}
	
	printf("Media: %.1f\n",media);
	if(media>=5 && media<=6.9){
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n",nota_exame);
		if(media_final>=5.0)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",media_final);
		}else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",media_final);
		}
	}
	else if(media>=7.0){
		printf("Aluno aprovado.\n");
	}else if(media<5.0){
		printf("Aluno reprovado.\n");
	}
	
	return 0;
}
