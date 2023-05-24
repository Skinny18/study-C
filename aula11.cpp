//
// Created by Gabriel Carlos Carvalho on 13/03/23.
//
#include<stdio.h>

int main(){
    float mensal, desc=0;
    int dia, mes, ano;

    scanf("%f", &mensal);
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    if(dia <7 ){
        desc = mensal * 15/100;
    }
    printf("o novo valor R$ %f", mensal-desc);
}