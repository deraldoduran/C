#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int f1, f2, f3;

    scanf("%d %d %d", &f1, &f2, &f3);
   if (f1<(f2+f3)&&(f1> abs(f3-f2))) {

        (compara(f1,f2,f3)||iguala(f1,f2,f3));



   }else{
       printf("não é possivel formar um triangulo");
   }

return 0;
}

int compara (int f1,int f2, int f3) {
int  b1, b2, b3=0;

    if ((f1 + f2 > f3) || (f1 + f3 > f2) || (f2 + f3 > f1)) {


        if (f1 > f2 && f1 > f3) {
            b1 = f1;
            printf("lado 1 eh o maior  %d /n", f1);
            if (f2 > f3) {
                b2 = f2;
                printf("lado 2 e o segundo maior %d /n", f2);
            } else {
                b3 = f3;
                printf("lado 3 e o segundo maior %d /n", f3);
            }
        } else if (f2 > f1 && f2 > f3) {
            b2 = f2;
            printf("lado 2 eh o maior  %d /n", f2);
            if (f1 > f3) {
                b1 = f1;
                printf("lado 1 eh o segundo maior %d /n", f1);
            } else {
                b3 = f3;
                printf("lado 3 eh o segundo maior %d /n", f3);
            }

        } else if (f3 > f1 && f3 > f2) {
            b3 = f3;
            printf("lado 3 eh o  maior  %d /n", f3);
            if (f1 > f2) {
                b1 = f1;
                printf("lado 1 eh o segundo maior %d /n", f3);
            } else {
                b2 = f2;
                printf("lado 2 eh o segundo maior %d", f2);
            }
        }
    }
return 1;
}

int iguala (int f1, int f2, int f3){

    if ((f1==f2)||(f1==f3)){
        printf("isoceles");

    }else if(f1==f2==f3){
        printf("equilatero");

    }else if (f1!=f2!=f3){
        printf("escaleno");
    }
return 2;
}
