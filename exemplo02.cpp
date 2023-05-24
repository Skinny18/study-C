#include<stdio.h>

int main(){
	
	char sexo;
	int idade;
	
	printf("Informe seu sexo(H = homem, M = mulher):");
	scanf("%c", &sexo);
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	if((sexo == 'h') && (idade >= 21)){
		printf("Pode entrar");
	}else if((sexo == 'm') && (idade >= 18)){
		printf("Pode entrar");
	}else{
		printf("acesso negado");
	}
	
	
		
}
