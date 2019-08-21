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
