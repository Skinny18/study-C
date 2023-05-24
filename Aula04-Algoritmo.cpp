#include<stdio.h>

main() {
   
   int
   valorhora = 25,
   trabdia = 8;
   
   int a;
   
   float inss = 0.11, salario;
   
   printf("Digite a quantidade de dias trabalhados: ");
   scanf("%d,", &a);
   
   salario = a * valorhora * trabdia;
   salario = salario - (salario * inss);
   
   printf("O salario é R$ %.2f", salario);
   
   
   
   
    

    
}

