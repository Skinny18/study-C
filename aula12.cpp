//
// Created by Gabriel Carlos Carvalho on 13/03/23.
//
#include<stdio.h>

int main(){
    float sal, inss = 0;
    scanf("%f", &sal);
    if(sal <= 1300){
        inss = 0 ;
    }else if((sal >= 1301) && (sal<= 2200)){
        inss = sal * 10/10;
    }else if((sal > 2200) && (sal <= 3100)){
        inss = sal * 25/100;
    }else {
        inss = sal * 30/100;
    }

    printf("O inss é : R$ %f", inss);
}
