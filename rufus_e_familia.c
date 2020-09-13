#include <stdio.h>

int main(){
    int f1,f2,f3,p,m,g;

    scanf("%d %d %d", &f1,&f2,&f3);

    if(f1>f2 && f1>f3){
        g=f1;

        if(f2>f3){
            m=f2;
            p=f3;
            printf("GMP");
        }else{
            m=f3;
            p=f2;
            printf("GPM");
        }
    }else if (f2>f1 && f2>f3){
        g=f2;

        if (f1>f3){
            m=f1;
            p=f3;
            printf("MGP");
        }else{
            m=f3;
            p=f1;
            printf("PGM");
        }

    }else if (f3>f1 && f3>f2){
        g=f3;

        if (f1>f2){
            m=f1;
            p=f2;
            printf("MPG");
        }else{
            m=f2;
            p=f1;
            printf("PMG");
        }
    }

    return 0;
}
