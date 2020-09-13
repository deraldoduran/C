#include <stdio.h>
int main(){
    int sec, hora,tempo,min;

    hora=0;
    min=0;
    sec=0;

    scanf("%d", &tempo);



    sec=tempo%60;
    min=tempo/60;
    hora=tempo/3600;

    printf("%d :%d :%d ,,%d",hora,min,sec,tempo);


    if (tempo<60){
        printf(" %d:%d:%d ", hora, min, sec);

    }else if (((hora<0)&&(min<60))&&(sec<60)){




                printf("erro");




            printf("%d : %d : %d", hora, min, sec);



    }else if ((hora>0)&&(min>0)&&(sec>0)){

              printf("aqui");

              printf("%d : %d : %d", hora, min, sec);
              }




    return 0;
}
