#include <stdio.h>
int main(){
    char tipo,fator,tipom,fatorm,tipop,fatorp;

    scanf(" %c %c", &tipo,&fator);
    scanf(" %c %c", &tipom,&fatorm);
    scanf(" %c %c", &tipop,&fatorp);



    if (((tipo=='o')&&((tipom=='o')||(tipom=='a')||(tipom=='b')))){

        if (((tipop=='o')||(tipop=='a')||(tipop=='b'))&&(tipop!='x')){

                printf("SIM");

        }else {
            printf("NAO");
        }
        }else if(((tipo='a'))&&((tipom=='a')||(tipom=='x')||(tipom=='b'))&&((tipop=='a')||(tipop=='b')||(tipop=='x'))){

            printf("SIM");
        }else if(((tipo='b'))&&((tipom=='b')||(tipom=='x')||(tipom=='a'))&&((tipop=='b')||(tipop=='a')||(tipop='x'))){

            printf("SIM");
        }else if(((tipo=='x')&&((tipom=='a')||(tipom=='b')||(tipom=='x'))&&((tipop=='x')||(tipop=='a')||(tipop=='b')))){
                 printf("SIM");

                 }else{
                    printf("NAO");

                 }



    return 0;
}
