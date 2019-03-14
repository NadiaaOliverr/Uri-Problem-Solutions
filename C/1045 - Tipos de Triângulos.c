/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 
3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo 
uma mensagem adequada:
se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
---Entrada---
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
---Saída---
Imprima todas as classificações do triângulo especificado na entrada.*/

#include <stdio.h>
#include <math.h>
int main()
{
	double A,B,C;
	double vetor[3];
	double auxiliar;
	int i,j,nao_forma=0;
	
	do{
	
		scanf("%lf %lf %lf",&A,&B,&C);
	}while(A<0.0 || B<0.0 || C < 0.0);
	
	vetor[0] = A;
	vetor[1] = B;
	vetor[2] = C;
	
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			 if ( vetor[i] < vetor[j] )
     		 {
         		auxiliar = vetor[j]; 
         		vetor[j] = vetor[i]; 
         		vetor[i] = auxiliar; 
      		 }
    	}
	}
	A = vetor[0];
	B = vetor[1];
	C = vetor[2];
	
	if(A>=B+C){
		printf("NAO FORMA TRIANGULO\n");
		nao_forma = 1;
	}else if(pow(A,2)==(pow(B,2)+pow(C,2))){
		printf("TRIANGULO RETANGULO\n");
	}else if(pow(A,2)>(pow(B,2)+pow(C,2))){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if(pow(A,2)<(pow(B,2)+pow(C,2))){
		printf("TRIANGULO ACUTANGULO\n");
	}if(A==B && B==C && nao_forma==0){
		printf("TRIANGULO EQUILATERO\n");
	}else if(A==B || A==C || B==C && nao_forma==0){
		printf("TRIANGULO ISOSCELES\n");
	}
	
	return 0;
}
