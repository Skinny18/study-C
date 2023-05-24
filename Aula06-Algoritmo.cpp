#include<stdio.h>

int main() {
   
	float a, b, juros = 0.03;
	int meses = 1;
	
	printf("Digite o valor do emprestimo:");
	scanf("%f", &a);
	
	printf("Valor inical: %f", a);
		
	b = a*(1+juros)*meses;
	
	printf("Valor final: %f", b);
    
    
    

    
}

