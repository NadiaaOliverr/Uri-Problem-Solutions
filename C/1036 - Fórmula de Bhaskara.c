/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem 
correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.
---Entrada---
Leia três valores de ponto flutuante (double) A, B e C.
---Saída---
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 
dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.*/
#include <stdio.h>
#include <math.h>

int main()
{
	double A,B,C;
	scanf("%lf %lf %lf",&A,&B,&C);
	double raiz1,raiz2;
	double delta;
	double zero;
	delta = ((pow(B,2)-(4*A*C)));
	zero = 2.00* A;
	
	if(delta<0.00 || zero==0.00)
	{
		printf("Impossivel calcular\n");
	}else{
	
	raiz1 = (-B + (sqrt((pow(B,2)-4*A*C))))/(2*A);
	raiz2 = (-B- (sqrt((pow(B,2)-4*A*C))))/(2*A);
	
	printf("R1 = %.5lf\nR2 = %.5lf\n",raiz1,raiz2);
	
	}
	
}
