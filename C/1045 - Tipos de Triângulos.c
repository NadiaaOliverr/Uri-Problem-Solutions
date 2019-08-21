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
