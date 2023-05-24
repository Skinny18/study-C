#include<stdio.h>

int main(){

    char nome[15][10], x[10];
    float salarios[15], salario = 0;
    int i = 0;

    while(i < 15){
        scanf("%s", nome[i]);
        scanf("%f", &salarios[i]);
        if(salarios[i] > salario){
            salario = salarios[i];
            strcpy(x, nome[i]);          

        }
        i++;
    }
    for(i = 0; i < 15; i++){
        printf("O nome e %s e o salario: R$%f", nome[i], salarios[i]);
    }

    printf("O mais rico %s e o salario R$:%f", x, nome);


}