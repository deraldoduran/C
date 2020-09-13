#include <stdio.h>

int main(){
    int c,c1,c2;

    scanf("%d %d %d",&c,&c1,c2);

    if((c==c1)||(c==c2)){
        printf("empate");

    }else if((c!=c1) &&(c1==c2)){

        printf("1");
    }else if((c==c2)&&(c!=c1)){
        printf("2");

    }else if((c==c1)&&(c!=c2)){
        printf("3");
    }


    return 0;
}
