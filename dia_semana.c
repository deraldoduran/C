#include <stdio.h>
int b=1900;

int anos(int b, int a){
    return  a-b;

}

int bissexto( int a ){

    return (int) a/4;
}

int tabela(int mes){
    int mesi;

    switch (mes){

        case 1:
            mesi=0;

            break;

        case 2:
            mesi=3;

            break;
        case 3:
            mesi=3;

            break;
        case 4:
            mesi=6;

            break;
        case 5:
            mesi=1;

            break;
        case 6:
            mesi=4;

            break;
        case 7:
            mesi=6;

            break;
        case 8:
            mesi=2;

            break;
        case 9:
            mesi=5;

            break;
        case 10:
            mesi=0;

            break;
        case 11:
            mesi=3;

            break;
        case 12:
            mesi=5;

            break;


    }
    return mesi;

}

int day(int a){

    return a-1;
}

int comprova(int a, int c,int d){
    if (a%4==0 && 0!=a%100){
        if (d<=29 && c<=2){
    return 1;
    }else{
    return 0;
}}else{
  return 0;
}
}
int main() {

    int dia,mes,a,mesi,data,semana,an,c,d;

    scanf("%d %d %d",&dia,&mes,&an);

if (comprova(an,mes,dia)){
    semana=(anos(b,an)+(bissexto(an))+tabela(mes)+day(dia))%7;

    switch (semana){
    case 0:
        printf("SEG");
        break;
    case 1:
        printf("TER");
        break;
    case 2:
        printf("QUA");
        break;
    case 3:
        printf("QUI");
        break;
    case 4:
        printf("SEX");
        break;
    case 5:
        printf("SAB");
        break;
    case 6:
        printf("DOM");
        break;
}

}else{
    semana=(anos(b,an)+(bissexto(an)+1)+tabela(mes)+day(dia))%7;

switch (semana){
    case 0:
        printf("SEG");
        break;
    case 1:
        printf("TER");
        break;
    case 2:
        printf("QUA");
        break;
    case 3:
        printf("QUI");
        break;
    case 4:
        printf("SEX");
        break;
    case 5:
        printf("SAB");
        break;
    case 6:
        printf("DOM");
        break;
}

}
    return 0;
}
