/* vetores - é um ramo da ciencia da computacao que visa estudar formas do algoritmo 
possibilitar armazenamento,organizaçao e consulta ao dados

Tipos: 

-vertor                     -pila

-matriz                       -Arvore binaria

-Lista encadeada              -Grafos

-lista duplamente encadeada   

-fila

Vertor:Estrutura de dados sequencial estática. Permite guardar dados de forma sequencial;
Declaracao: int vet[5], float x[5], char nome[10], char lista[10][10]
Inserindo Dados: ver[0] = 900, vet[1] = 1200, x[0] = 9.5, x[1] = 10.3, lista[0] = "neymar";

*/

#include<stdio.h>

int main(){

    int a, b, c = 0;

    for(a = 0; a <= 6; a++){


        printf("Digite um numero");
        scanf("%d", &b);

        if(b > c){
            c = b;
        }

    }

    printf("O maior numero é %d", c);

}