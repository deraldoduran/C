 #include <stdio.h>
    2 int main(){
    3     int n, divisor1, divisor2, divisor3;
    4
    5     scanf("%d",&n);
    6
    7     divisor1= (n%3);
    8
    9     divisor2=(n%5);
   10
   11     divisor3=(n%7);
   12
   13
   14     if ( ((divisor1==0) || (divisor2==0)) && (divisor3==0) ){
   15
   16         printf("nao");
   17     }
   18
   19     else if ( (divisor1==0) && (divisor2==0) ){
   20
   21         printf("sim");
   22     }
   23     else if (divisor1==0){
   24
   25         printf("sim");
   26     }
   27     else if (divisor2==0){
   28
   29         printf("sim");
   30     }
   31     else if (divisor3==0){
   32         printf("nao");
   33     }
   34
   35     return 0;
   36 }
