#include <stdio.h>
int main(){
int h,m,s,t;
h=0;
m=0;
s=0;
scanf("%d",&t);

if (t<60){
 printf("%d:%d:%d",h,m,t);
}else{

h=t/3600;
t=t-(h*3600);
m=t/60;
t=t-(m*60);
s=t;

printf("%d:%d:%d",h,m,s);
}
return 0;
}
