#include<stdio.h>

main() {
   
   float imc = 0, alt, peso;
   
   printf("Digite o peso: ");
   scanf("%f", &peso);
   
   printf("Digite a altura: ");
   scanf("%f", &alt);
   
   imc = peso / (alt*alt);
   
   printf("O Imc �: %.2f", imc);
   
   
    

    
}

