#include <stdio.h>

int main()
{
	float A,B,C,auxiliar;
	int i,j;
	float area,perimetro,vetor[3];
	
	scanf("%f %f %f",&A,&B,&C);
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
		area = ((A+B)*C)/2;
		printf("Area = %.1f\n",area);
	}else{
		perimetro = A+B+C;
		printf("Perimetro = %.1f\n",perimetro);
	}
	return 0;
}
