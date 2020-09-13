#include <stdio.h>
int main(){

    int n1,n2,n3,n4,maior;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    maior=0;

    if ( (n1 > n2) && (n1 > n3) && (n1 > n4) ){
            maior=n1;

    }if ( (n2>n1 ) && ( n2 > n3 ) && ( n3 > n4 ) ){
        maior=n2;


    }if ( (n3>n1) && (n3>n2) && (n3>n4) ){
        maior=n3;

    }if ( (n4>=n1) && (n4>=n2) && (n4>=n3) ){

        maior=n4;

    } printf("%d",maior);
    return 0;
}
