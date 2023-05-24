//
// Created by Gabriel Carlos Carvalho on 14/03/23.
//

#include <stdio.h>

int main(){
    int a = 0, b = 0;

    do{
        printf("\n Digite um numero positivo para parar:");
        scanf("%d", &a);
        b++;
    }while(a>0);

    printf("O total de numeros digitados foi: %d", b);
}
