#include <stdio.h>
#include <math.h>

int main(){
	float pago, troco, preco;
	
	int nota_100, nota_50, nota_10, nota_5, nota_2, moeda_1, moeda_050, moeda_025, moeda_010, moeda_5, moeda_001;
	
	printf("digite o preco:");
	scanf(" %f", &preco);
	
	printf("digite o valor pago: ");
	scanf(" %f", &pago);
	
	troco= pago-preco;
	
	
	
	
	if (troco<0){
		printf("valor insuficiente");
		}
		else {	
			
			printf(" o troco e: %2f", troco);
			
			nota_100= (int)troco/100;
			troco=troco-(nota_100*100);
			
			printf("a quantidade de notas de 100 %d \n",  nota_100);
			
			nota_50= (int)troco/50;
			troco=troco-(nota_50*50);
			
			printf("a quantidade de notas de 50 %d \n",  nota_50);
			
			nota_10= (int)troco/10;
			troco=troco-(nota_10*10);

			printf("a quantidade de notas de 10 %d \n",  nota_10);
			
			nota_5= (int)troco/5;
			troco=troco-(nota_5*5);

			printf("a quantidade de notas de 5 %d \n",  nota_5);
			
			nota_2= (int)troco/2;
			troco=troco-(nota_2*2);

			printf("a quantidade de notas de 2 %d \n",  nota_2);
			
			moeda_1= (int)troco/1;
			troco=troco -(moeda_1*1);

			printf("a quantidade de moedas de 1 %d \n",  moeda_1);
			printf(" %f ", troco);
			moeda_050= (troco/0.5);
			troco=troco-(moeda_050*0.5);

			printf("a quantidade de moedas de 0,50 %d \n",  moeda_050);
			
			moeda_025= troco/0.25;
			troco=troco-(moeda_025*0.25);

			printf("a quantidade de moedas de 0,25 %d \n",  moeda_025);
			
			moeda_010= troco/0.1;
			troco=troco-(moeda_010*0.1);

			printf("a quantidade de moedas de 0,10 %d \n",  moeda_010);
			
			moeda_5= troco/0.05;
			troco=troco-(moeda_5*0.05);

			printf("a quantidade de moedas de 0,05 %d \n",  moeda_5);
			
				moeda_001= troco/0.01;
			troco=troco-(moeda_001*0.01);

			printf("a quantidade de moedas de 0,01 %d \n",  moeda_001);
			
			
			
			
			return 0;
	}
			}
