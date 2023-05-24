
#include<stdio.h>

int main(){
    int cil;
    float vlr, ipva;

    scanf("%d", &cil);
    scanf("f", &vlr);

    if(cil <= 160){
        ipva = vlr * 3/100;
    }
    else if(cil <= 350){
        ipva = vlr * 5/100;
    }
    else if(cil <= 550){
        ipva = vlr * 6/100;
    }
    else{
        ipva = vlr * 8/100;
    }

    printf("O ipva : R$ %f", ipva);
}
