#include <stdio.h>
int main(){

float n1,n2,result;

char operador;
scanf("%f %f", &n1, &n2);

scanf(" %c", &operador);

if(operador== '+' ){
result=n1+n2;
printf("%f",result);
}else if(operador=='-'){
result=n1-n2;
printf("%f",result);
}else if (operador=='/'){
result=n1/n2;
printf("%f",result);
}else if (operador=='*'){
result=n1*n2;
printf("%f",result);
}else{
printf("operado na eh valido");
}
return 0;
}
