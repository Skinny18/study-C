#include<stdio.h>

int main(){
     int vet[10], i, c = 0;

    for(i=0; i<10; i++){
        scanf("%d", &vet[i]);
        if(vet[i] % 3 == 0){
            c++;
        }
    }

    for(i=0;i<10;i++){
        printf("\n%d", vet[i]);
    }

}