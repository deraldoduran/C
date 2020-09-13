#include <stdio.h>
int main(){
    char j1,j2,r,p,s,l,k;
    scanf(" %c %c ",&j1,&j2);

    if(j1==j2){

        printf("empate");
    }else if (j1=='S'){
        if ((j1=='L')||(j2=='P')){

        printf("jog1");
        }else if((j2=='S')||(j2=='R')){
            printf("jog2");
        }
    }else if(j1=='P'){
        if((j2=='R')||(j2=='K')){

        printf("jog1");

        } else if((j2=='S')||(j2=='L')){

            printf("jog2");
        }
    }else if (j1=='R'){
        if((j2=='L')||(j2=='S')){

        printf("jog1");
        }else if((j2=='P')||(j2=='K')){
            printf("jog2");
        }
    }else if(j1=='L'){
        if((j2='P')||(j2=='K')){

        printf("jog1");
        }else if((j2=='S')||(j2=='R')){
            printf("jog2");
        }
    }else if(j1=='K'){
        if((j2=='S')||(j2=='R')){

        printf("jog1");
        }else if((j2=='P')||(j2=='L')){
            printf("jog2");
        }
    }


    return 0;
}
