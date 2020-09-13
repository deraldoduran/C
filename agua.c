#include <stdio.h>
int main(){

int a,f,f1,f2,f3;

scanf("%d",&a);

if ((a<=10)||(a==0)){

    f=7;
    printf("R$ %d",f);

}else if ((a>=11)&&(a<=30)){

    f1=((a-10)*1)+7;
    printf("R$ %d",f1);

}else if ((a>=31)&&(a<=100)){

    f2=((a-30)*2)+20+7;
    printf("R$ %d",f2);

}else if (a>=101){

    f3=((a-100)*5)+7+20+140;
    printf("R$ %d",f3);
}


    return 0;
}
