#include <stdio.h>
int main()
{
	float M[12][12];
	int L; 
	char T[2]; // The uri not accept char simple
	int i,j;
	float sum = 0;
	
	scanf("%d",&L);
	scanf("%s",T);
	for (i=0;i<12;i++)
	{
		for (j=0;j<12;j++)
		{
			scanf("%f",&M[i][j]);
			if (j==L)
			{
				sum+=M[i][j];
			}
		}
	}	
	if (T[0] == 'S')
	{
		printf("%.1f\n",sum);
	}
	
	else
	{
		printf("%.1f\n",(sum/12.0));
	}
	return 0;
}
