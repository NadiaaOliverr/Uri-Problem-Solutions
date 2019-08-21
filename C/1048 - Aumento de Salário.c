#include <stdio.h>

int main()
{
	float valor,novo_sal=0.0,reajuste=0.0;
	scanf("%f",&valor);


	if(valor>=0.0 && valor<=400.0){
		reajuste = valor * 0.15;
		novo_sal = valor + reajuste;
		printf("Novo salario: %.2f\n",novo_sal);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 15 %%\n");
	}else if(valor>=400.01 && valor<=800.00){
		reajuste = valor * 0.12;
		novo_sal = valor + reajuste;
		printf("Novo salario: %.2f\n",novo_sal);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 12 %%\n");
	}else if(valor>=800.01 && valor<=1200.00){
		reajuste = valor * 0.10;
		novo_sal = valor + reajuste;
		printf("Novo salario: %.2f\n",novo_sal);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 10 %%\n");
	}else if(valor>=1200.01 && valor<=2000.00){
		reajuste = valor * 0.07;
		novo_sal = valor + reajuste;
		printf("Novo salario: %.2f\n",novo_sal);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 7 %%\n");
	}else if(valor>2000.00){
		reajuste = valor * 0.04;
		novo_sal = valor + reajuste;
		printf("Novo salario: %.2f\n",novo_sal);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}
