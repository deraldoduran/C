#include <stdio.h>
int main(){
    int n, divisor1, divisor2, divisor3;

    scanf("%d",&n);

    divisor1= (n%3);

    divisor2=(n%5);

    divisor3=(n%7);


    if ( ((divisor1==0) || (divisor2==0)) && (divisor3==0) ){

        printf("nao");
    }

    else if ( (divisor1==0) && (divisor2==0) ){

        printf("sim");
    }
    else if (divisor1==0){

        printf("sim");
    }
    else if (divisor2==0){

        printf("sim");
    }
    else if (divisor3==0){
        printf("nao");
    }

    return 0;
}
