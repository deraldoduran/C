#include <stdio.h>
int main(){
	
	int numero_1, numero_2, numero_3;

	printf("digite numero 1: \n");
	scanf("%d", &numero_1);
	
	printf("digite numero 2: \n");
	scanf("%d", &numero_2);
	
	printf("digite numero 3: \n");
	scanf("%d", &numero_3);
	
	if ((numero_1==numero_2) && (numero_1==numero_3)){
	
	printf(" 1,2 e 3 sao  iguais");
	}else if ((numero_1!=numero_2) && (numero_1 ==numero_3)){
	
	printf("numero 1 e numero 3 sao iguais");
	}else if ((numero_1==numero_2) && (numero_1!=numero_3)){
	
	printf("numero 1 e numero 2 sao iguais");
	}else if (numero_2==numero_3){
	
	printf("numero 2 e 3 sao iguais"); 
	}else {
		printf(" todos os numeros sao diferentes");}
	
	return 0; 
	}
