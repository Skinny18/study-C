#include<stdio.h>

int main(){

    float s[15], ns[15];
    int i;
    char nome[15][15];


    for(i=0; i<15; i++){
        printf("Digite o salario");
        scanf("%f", &s[i]);
        printf("Digite o nome");
        scanf("%s", nome[i]);

        ns[i] = s[i] + s[i]*15/100;

    }

    for(i=0; i<15; i++){
        printf("\nNome:%s", nome[i]);
        printf("\nSalário original: %f", s[i]);
        printf("\nSalário modificado: %f", ns[i]);
    }


}