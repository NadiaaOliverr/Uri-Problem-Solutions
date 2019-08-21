#include <stdio.h>
#include <math.h>

int main()
{	
	int a,b,c;
	int MaiorAB;
	scanf("%d %d %d",&a,&b,&c);
	
	MaiorAB = (a+b+abs(a-b))/2;
	MaiorAB = (MaiorAB+c+abs(MaiorAB-c))/2;
	
	printf("%d eh o maior\n",MaiorAB);
	
	return 0;
}
