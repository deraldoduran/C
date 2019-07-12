//
// Created by duran on 06/06/2019.
//
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int bate= 0;
int cont0=0,cont1=0,cont4=0,cont5=0;

int embaralha(int *x,int n, int a, int b){
    srand( time(NULL) );
    if((a<b)){//garante minimo menorquemaximo e que o valor maximo e mnor que a capacidade do vetor
        int m=b-a+1;
        int y[m];

        for(int i=0;i<m;i++) {
            a++;
            y[i] = a;//cria um vetor auxiliar do maximo tamanho
        }
        for(int i=m-1;i>0;i--){

            int k=rand()%i;//gera posicoes variaveis
            int u=y[i];//embaralha o vetor fazendo com que o vetor y auxiliar seja randomico
            y[i]=y[k];
            y[k]=u;
        }
        for(int i=0;i<n;i++)
            x[i]=y[i];//passa os valores embaralhados para o vetor de saida

    }else {
        return 0;

    }
}

/*void atribui_cartela(int vet[],int n,int *l1,int *l2, int *l3,int *l4,int *l5,int **cart){
    for(int i=0;i<n;i++){
        vet[i]=gera_cartela(vet_l1,vet_l2,vet_l3,vet_l4,vet_l5,cartela);
    }
}*/
int gera_cartela(int *l1,int *l2, int *l3,int *l4,int *l5,int **cart) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {


            cart[i][j] = l1[i];
            cart[i][j+1] = l2[i];
            cart[i][j+2] = l3[i];
            cart[i][j+3] = l4[i];
            cart[i][j+4] = l5[i];
        }
    }
    cart[2][2]=00;
}

void print_cartela(int **cart) {


    for (int i = 0; i < 5; i++) {
        for(int j=0;j<5;j++){
            printf("%d ",cart[i][j]);
            printf("\t");

        }printf("\n");

    }
}




void roleta(int *vet){
    int cont=1;
    for(int i=0;i<75;i++){
        vet[i]=cont++;
    }
}

void rack(int *vet){
    int cont=0;
    for(int i=0;i<75;i++){
        vet[i]=cont;
    }
}

void imprime_roleta(int *vet,int n){
    int cont=0;
    for(int i=0;i<75;i++){
        if(vet[i]==n){
            vet[i]=0;

    }printf("%d \t",vet[i]);

}
}

void imprime_rack(int *vet,int n) {
    int cont = 0;
    vet[n-1] = n;
    for (int i = 0; i < 75; i++) {
        if(vet[i]==0)printf("- \t");
        else
        printf("%d \t", vet[i]);
    }
}
int compara(int **M, int *vet, int n){


    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            //for(int z=0;z=n){
                if(M[i][j]==vet[n]){
                    bate++;
                    printf(" \n");
                    printf("%d \n",bate);
                    if(bate==24){
                       printf("bateu");
                       return 0;

                    }else return 1;
                }

        }
    }

}

int compara_linha(int **M, int *vet, int n) {



    for (int i = 0; i < 5; i++) {
        //for (int j = 0; j < 5; j++) {

            if (M[0][i] == vet[n]) {//garante que avnca para a próxima bola pedida
               // bate++;
               cont0++;
                printf(" \n");
                printf("%d \n ", cont0);
                if (cont0 == 5) {
                    printf("bateu linha 1 \a");
                    return 0;

                }
            }
            else if (M[1][i] == vet[n]) {
                //bate++;
                cont1++;
                printf(" \n");
                printf("%d \n ", cont1);
                if (cont1 == 5) {
                    printf("bateu linha 2 \a");
                    return 0;

                }

            }
            else if (M[3][i] == vet[n]) {
                //bate++;
                cont4++;
                printf(" \n");
                printf("%d \n ", cont4);
                if (cont4 == 5) {
                    printf("bateu linha 4 \a");
                    return 0;

                }
            }
            else if (M[4][i] == vet[n]) {
                //bate++;
                cont5++;
                printf(" \n");
                printf("%d \n ", cont5);
                if (cont5 == 5) {
                    printf("bateu linha 5 \a");
                    return 0;

                }

            }
        }
    }
