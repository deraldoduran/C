#include <stdio.h>
int main(){
    char tipo,fator,tipom,fatorm,tipop,fatorp;

    scanf(" %c %c", &tipo,&fator);
    scanf(" %c %c", &tipom,&fatorm);
    scanf(" %c %c", &tipop,&fatorp);

    if (fator!= fatorp){

        printf("nao");

    }else if ((fator == fatorm)&&(fator==fatorp)){
        if ((tipo==tipom)&&(tipop!='x')){

                printf("sim");

        }else {

            printf("nao");
        }

    }

    return 0;
    }
