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
