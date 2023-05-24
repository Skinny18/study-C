//Lista Sequencial Estática

//Vetores - São estruturas de dados

#include<stdio.h>



int main(){

    int i, vet[10];

    for(i = 0; i < 10; i++){
        printf("Digite um número:");
        scanf("%d", &vet[i]);

    }

    for(i = 0; i < 10; i++){
        if(vet[i] >= 18){
            printf("\nO Número: %d", vet[i]);
        }
        
        

    }

}

