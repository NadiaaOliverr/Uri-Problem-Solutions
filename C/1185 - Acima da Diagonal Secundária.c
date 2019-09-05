#include <stdio.h>
int main()
{
	float M[12][12]; 
	char T[2]; // The uri not accept char simple
	int i,j;
	float sum = 0;
	int count = 0;
	int aux = 1;
	
	scanf("%s",T);
	for (i=0;i<12;i++)
	{
		for (j=0;j<12;j++)
		{
			scanf("%f",&M[i][j]);
			if (j<(12-aux)) 
			{
				sum+=M[i][j];
				count +=1;
				aux +=1;
			}
			
		}
	}	
	if (T[0] == 'S')
	{
		printf("%.1f\n",sum);
	}
	
	else
	{
		printf("%.1f\n",(sum/count));
	}
	return 0;
}
