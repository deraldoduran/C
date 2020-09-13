#include <stdio.h>
int main(){
    float nota1, nota2, nota3, nota4, media;
    printf("digite a nota 1:");
    scanf("%f",&nota1);
    printf("digite a nota 2:");
    scanf("%f",&nota2);
    printf("digite a nota 3:");
    scanf("%f",&nota3);
    printf("digite a nota 4:");
    scanf("%f",&nota4);
    media=(nota1+nota2+nota3+nota4)/4;
    if (media>=7){
    printf("voce esta aprovado %2f",media);
    }
       else if ((media>=0) && (media<4)){
    printf("voce nao foi aprovado %2f", media);
    }
		else if ((media>=4) && (media<7)){
		printf("voce vai pra prova final %2f",media);
	}
		
    return 0;

}
