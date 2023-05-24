#include<stdio.h>

main(){
	
	float sal,inss,ir;
	
	printf("Digite seu salario:");
	scanf("%f", &sal);
	
	inss = sal * 11/100;
	
	printf("O inss eh:R$ %.2f",inss);
	
	if(sal <= 1300){
		printf("\nSalario base: %.2f", sal);
		printf("\n Isento de imposto de renda");
	}else if(sal <= 2800){
		ir = sal * 6/100;
		printf("\nSalario base: %.2f", sal);
		printf ("\nSalario com desconto do ir %.2f", sal- ir);
	}else if(sal <= 3700){
		ir = sal * 15/100;
		printf("\nSalario base: %.2f", sal);
		printf ("\nSalario com desconto do ir %.2f", sal- ir);
	}else{
		ir = sal * 23/100;
		printf("\nSalario base%.2f", sal);
		printf ("\nSalario com desconto do ir %.2f", sal- ir);
	}
	
	
}
