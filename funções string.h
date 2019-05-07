#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char str1[100]="JOAO", str2[100]=" ALMDEIDA";

   strcat(str1,str2);
   printf("%s\n", str1);
   strcpy(str1,str2);
   printf("%d\n", (int) strlen(str1));
   if(strcmp(str1,str2)==0) printf("Strings iguais!\n");
   else if(strcmp(str1,str2)<0) printf("String 1 vem antes da String 2\n");
        else printf("String 2 vem antes da String 1\n");
  

   return 0;
}

