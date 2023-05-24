#include <stdio.h>

main(){
	int a;
	
	printf("Digite um numero:");
	scanf("%d", &a);	
		
	if((a > 100)&& (a<300)){
		printf("È maior que 100 e menor que 300");
	};
	
	printf("Menor que 100 ou maior que 300");
	
}
