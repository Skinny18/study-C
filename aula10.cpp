//
// Created by Gabriel Carlos Carvalho on 13/03/23.
//
#include<stdio.h>

int main(){
    int ap, aa, idade;
    scanf("%d", &ap);
    scanf("%d", &aa);

    idade = aa - ap;

    if((ap > 0 ) & (aa > ap)){
        idade = aa - ap;
        printf("Ano Valido");
    }else{
        printf("Invalido");

    }

    printf("%d", idade);



}