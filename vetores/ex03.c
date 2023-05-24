#include<stdio.h>

int main(){

    int idade, vet[10], i = 0, c = 0;

    for(i = 0; i < 10; i++){
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        if(idade >= 18){
            vet[i] = idade; 
        }else{
            vet[i] = 0;
        }
    }

    printf("\n a lista: ");
    for(i = 0; i < 10; i++){
        printf("%d \n", vet[i]);
        /*if(vet[i] >= 18){
            c = c + 1;
        }
        printf("%d", c);*/
    }

    return 0;
}