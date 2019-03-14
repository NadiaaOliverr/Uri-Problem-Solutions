/*Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
---Entrada---
O arquivo de entrada contém dois valores inteiros.
---Saída---
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na 
entrada que deverá caber em um inteiro.*/

#include <stdio.h>
int main(){
	
	int X,Y,i,aux,soma_impar=0;
	scanf("%d %d",&X,&Y);
	
	if(Y<X)
	{
		aux = X;
		X = Y+1;
		Y = aux;
	}
	for(i=X;i<Y;i++){
		if(i%2!=0){
			if(i<0){
				soma_impar-=i*(-1);
			}else{
				soma_impar+=i;
			}
		}
	}
	printf("%d\n",soma_impar);
	return 0;
}
