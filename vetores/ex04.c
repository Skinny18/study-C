#include<stdio.h>

int main(){

    int vet[10], i = 0, c = 0;

    for(i = 0;i < 10;i++){
        scanf("%d", &vet[i]);

        if(vet[i] % 3 == 0){
            c++;
        }
    }
    printf("A lista de números:");
    for(i = 0; i < 10; i++){
        printf("%d", vet[i]);
    }
    printf("A quantidade de numeros multiplos de 3 sao: %d", c);

    return 0;
}