#include <stdio.h>

int main()
{
	int tempo_horas;
	int vel_media;
	
	scanf("%d %d",&tempo_horas,&vel_media);
	
	printf("%.3f\n",(tempo_horas*vel_media)/12.00);
	
	return 0;
}
