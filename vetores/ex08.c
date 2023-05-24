#include<stdio.h>



int main(){


    int num[10], c=0, i=0, soma = 0;

    for( i=0; i<10; i++){

        scanf("%d", &num[i]);
        if(num[i] > 0){
            c++;
            soma+=num[i]; //soma = soma + num[i];

        
        }
    }

    for(i=0; i<10; i++){
        printf("\n O numero: %d", num[i]);

    }

    printf("\nMedia dos numeros positivos: %d", (soma/c));

}