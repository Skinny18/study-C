#include<stdio.h>

int main(){

    float v[10], maior = 0;
    int i;

    for(i=0;i<10;i++){
        scanf("%f", &v[i]);
        if(v[i]>maior){
            maior = v[i];
        }
    }

    for(i=0;i<10;i++){
        printf("\n %f", v[i]);
    }

    printf("O maior: %f", maior);

}