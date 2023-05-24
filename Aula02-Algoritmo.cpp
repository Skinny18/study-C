#include<stdio.h>

main() {
    int a, b, c ;
    float media;
   
    printf("Digite um numero inteiro:");
    scanf("%d",&a);

    printf("Digite um segundo numero: ");
    scanf("%d",&b);
    
    
    c = a+b;

    printf("\nO resultado da soma: %d", c);
    c = a-b;
	printf("\nO resultado da subtracao %d",c);
	c = a*b;
	printf("\nO resultado da multiplicacao: %d",c);
     
    media = a/b;
    printf("\nO resultado da divisao: %f", media);


    
}

