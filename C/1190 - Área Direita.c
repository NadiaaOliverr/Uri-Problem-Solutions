#include <stdio.h>

int main()
{
	double M[12][12];
	char O[2];
	double sum = 0.0;
	int aux1 = 11;
	int aux2 = 1;
	int i, j;
	int count = 0;
	
	scanf("%s",O);
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%lf",&M[i][j]);
		}
	}
	
	for(i=11; i>6; i--)
	{
		for(j=aux2; j<aux1;j++)
		{
			sum += M[j][i];
			count += 1;
		}
		aux1 -= 1;
		aux2 += 1;
	}
	if(O[0] == 'S')
	{
		printf("%.1lf\n",sum);
	}else{
		printf("%.1lf\n",(sum/count));
	}
	
}
