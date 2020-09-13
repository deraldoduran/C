#include <stdio.h>
int verifica(int d){

    if (d>1 && d<=7){
        return 1;
    } else{
        return 0;
    }
}

int horario (int h1, int h2, int d){

    if ((h1>=8 && h2<=59) && (h1<=11 && h2<=59) || (h1>=14 && h2<=59)&&  (h1<=17 && h2<=59) ||(d==7 && h1>=8 && h2<=59 && h1<=11 && h2<=59)){

        return 1;
    }else{
        printf("nao");
        return 0;
    }

}

int main() {
    int d,h1,h2;
scanf("%d %d %d", &d, &h1, &h2);
if (verifica(d) && horario(h1,h2,d)){
    printf("sim");
}else{
    printf("nao");
}

    return 0;
}
