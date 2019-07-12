#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "shuffle.h"


int main() {
    int cont=0,stop=1,bola=0, tipo=0;


    int *vet_aleatorio=(int*)malloc(76* sizeof(int));//tem a funcao de saco de bolas

    int *vet_bolas=(int*)malloc(75* sizeof(int));
    int *vet_rack=(int*)malloc(75*sizeof(int));
    int *vet_l1=(int*)malloc(5*sizeof(int));
    int *vet_l2=(int*)malloc(5*sizeof(int));
    int *vet_l3=(int*)malloc(5*sizeof(int));
    int *vet_l4=(int*)malloc(5* sizeof(int));
    int *vet_l5=(int*)malloc(5*sizeof(int));

    int **cartela=(int**)malloc(5* sizeof(int*));
    for(int i=0;i<5;i++){
        cartela[i]=(int*)malloc(5* sizeof(int));
    }
    roleta(vet_bolas);
    rack(vet_rack);
    embaralha(vet_l1,5,1,14);
    embaralha(vet_l2,5,16,29);
    embaralha(vet_l3,5,31,44);
    embaralha(vet_l4,5,46,59);
    embaralha(vet_l5,5,61,74);
    gera_cartela(vet_l1,vet_l2,vet_l3,vet_l4,vet_l5,cartela);
    print_cartela(cartela);
    embaralha(vet_aleatorio,75,1,75);
    printf("bingo linha digite 1, bingo full house digite 2");
    scanf("%d",&tipo);

    switch (tipo)
    {

        case 2:

            while (stop != 0) {

                printf("digite 0 para parar e 1 para pedir mais uma bola");
                scanf("%d", &stop);

                printf("\n");

                bola = vet_aleatorio[cont];

                imprime_roleta(vet_bolas, bola);
                imprime_rack(vet_rack, bola);

                stop = compara(cartela, vet_aleatorio, cont);
                cont++;
                if (cont == 75)stop = 0;
            }

            break;

        case 1:
            while (stop != 0) {

                printf("digite 0 para parar e 1 para pedir mais uma bola");
                scanf("%d", &stop);

                printf("\n");

                bola = vet_aleatorio[cont];

                imprime_roleta(vet_bolas, bola);
                imprime_rack(vet_rack, bola);

                stop = compara_linha(cartela, vet_aleatorio, cont);

                cont++;
                if (cont == 75)stop = 0;
            }
            break;
    }








    free(vet_aleatorio);
    free(cartela);
    free(vet_l1);
    free(vet_l2);
    free(vet_l3);
    free(vet_bolas);
    free(vet_rack);
    free(vet_l4);
    free(vet_l5);
    for(int i=0;i<5;i++){
        free(cartela[i]);
    }
    free(cartela);
    return 0;
}