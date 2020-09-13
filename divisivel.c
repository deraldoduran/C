#include <stdio.h>
#include <math.h>
int main(){
    int n1,n2;
    int result;

    scanf("%d",& n1);
    scanf("%d",& n2);
    result= (n1%n2);

    if(n2!=0){

        if (result==0){
        printf("divisivel");

    }   else if(result!=0){
        printf("indivisivel");
    }}
    return 0;
}
