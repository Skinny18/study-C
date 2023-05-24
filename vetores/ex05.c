#include<stdio.h>

int main(){

    float altura[10], a = 0;
    int i = 0;

    while(i < 10){
        scanf("%f", &altura[i]);

        if(altura[i] > a){
            a = altura[i];
            i++;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%f", altura[i]);
    }

    printf("O maior: %f", a);


}