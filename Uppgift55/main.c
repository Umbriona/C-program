/*
1.5.5 Dynamisk allokering av minne – textsträngar - 2p
Med fält (arrayer) måste du bestämma dig för en storlek när du skriver din källkod.
Med funktionerna malloc och realloc kan man allokera en valfri mängd minne och få en pekare till det.
Allt minne man allokerar på detta sätt måste man sedan manuellt frigöra med funktionen free.
Använd dessa verktyg för att skapa ett program som accepterar indata av godtycklig längd.
Efter inmatning har skett ska programmet dela upp den inmatade informationen i två separata textsträngar:

char *str1, *str2;

str1 ska innehålla alla tecken med jämnt index från ursprungstexten medan str2 ska innehålla alla tecken från ojämna positioner.
Skriv ut de två resulterande strängarna till kommandotolkens fönster.

Tips: malloc
med släktingar arbetar alltid med mängden i byte. Använd specialfunktionen sizeof
för att ta reda på hur många byte en viss datatyp är. Exempelvis sizeof(double), eller sizeof(char).

*/
#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){

char *str1, *str2;
int counter1 = 0,counter2 = 1;

str1 = malloc(12*sizeof(char));
str2 = malloc(12*sizeof(char));



while(counter1%2 == 0 ? (str1[counter1/2]=getchar())!='\n' : (str2[(counter1-1)/2]=getchar())!='\n'){
    counter1++;
    if(counter1%24 == 0){
        counter2++;
        realloc(str1,counter2 * 12*sizeof(char));
        realloc(str2,counter2 * 12*sizeof(char));
    }
}
if(counter1%2 ==0){
    str1[counter1/2+1] = '\0';
    str2[counter1/2] = '\0';
}
else{
    int temp = (trunc(counter1/2)+1);
    str1[temp] = '\n';
    str1[temp+1] = '\0';
    str2[temp] = '\0';
}

  printf("Even chars: %sOdd chars: %s",str1,str2);
  free(str1);
  free(str2);
return 0;
}
