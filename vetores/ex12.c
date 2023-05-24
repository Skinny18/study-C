#include<stdio.h>


//crie um algoritmo que entre com vários produtos e seu preço. Realize a venda desses produtos



int main(){

    int i, x,z, y, estoque[10];
    char produto[10][10], nome;
    float preco[10];

    do{
        printf("\n------Taberna------");
        printf("\n1 - Cadastro de Produto");
        printf("\n2 - Listar os Produtos");
        printf("\n3 - Vender Produto");

        printf("\nEscolha uma opção:");
        scanf("%d", &y);

        switch(y)
        {
        case 1:
            printf("\nCadastro do Produto");
            printf("\nDigite o nome do produto:");
            scanf("%s", produto[i]);
            printf("\nDigite o estoque do produto:");
            scanf("%d", &estoque[i]);
            printf("\nDigite o preço do produto:");
            scanf("%f", &preco[i]);
            i++;
            printf("\nProduto cadastrado com sucesso!");

            break;
        case 2:
            printf("\n###### LISTA DOS PRODUTOS ######");
            for(z=0; z < i;z++){
                printf("\nO produto: %s", produto[z]);
                printf("\nO estoque: %d", estoque[z]);
                printf("\nO preço: R$ %.2f", preco[z]);
                printf("\n----------------------------");
            }



            break;

        case 3: 
            printf("\n###### BUSCAR PRODUTO ######");
            for(z=0; z < i;z++){
                printf("\nO produto: %s", produto[z]);
                printf("\nO estoque: %d", estoque[z]);
                printf("\nO preço: R$ %.2f", preco[z]);
                printf("\n----------------------------");
            }

            printf("Digite o nome do produto para a busca:");
            scanf("%s", &nome);

            for(z=0; z<i;z++){
                if(strcmp(produto[z], nome)==0){
                    printf("\nProduto encontrado !!:");
                    printf("\nO produto: %s", produto[z]);
                    printf("\nO estoque: %d", estoque[z]);
                    printf("\nO preço: R$ %.2f", preco[z]);

                }
            }
            break;

            case 4:
                printf("##### VENDER PRODUTO #####");
                

            break;   
        default:
            printf("\nOpção em desenvolvimento");


            break;
        }


        printf("\nDigite 1 para continuar, ou 0 para sair:");
        scanf("%d", &x);



    }while(x != 0);


}