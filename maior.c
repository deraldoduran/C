#include <stdio.h>
int main(){

    int n1,n2,n3,n4;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);

    if (n1>n2)&&(n1>n3)&&(n1>n4){
        printf("%d",n1);
    }if(n1<n2)&&(n2>n3)&&(n3>n4){
        printf("%d",n2);

    }if (n1<n3)&&(n2<n3)&&(n3>n4){
        printf("%d",n3);
    }if (n1<n4)&&(n2<n4)&&(n3<n4){
        printf("%d",n4);
    }
    return 0;
}
