/*
1.5.5 Dynamisk allokering av minne � textstr�ngar - 2p
Med f�lt (arrayer) m�ste du best�mma dig f�r en storlek n�r du skriver din k�llkod.
Med funktionerna malloc och realloc kan man allokera en valfri m�ngd minne och f� en pekare till det.
Allt minne man allokerar p� detta s�tt m�ste man sedan manuellt frig�ra med funktionen free.
Anv�nd dessa verktyg f�r att skapa ett program som accepterar indata av godtycklig l�ngd.
Efter inmatning har skett ska programmet dela upp den inmatade informationen i tv� separata textstr�ngar:

char *str1, *str2;

str1 ska inneh�lla alla tecken med j�mnt index fr�n ursprungstexten medan str2 ska inneh�lla alla tecken fr�n oj�mna positioner.
Skriv ut de tv� resulterande str�ngarna till kommandotolkens f�nster.

Tips: malloc
med sl�ktingar arbetar alltid med m�ngden i byte. Anv�nd specialfunktionen sizeof
f�r att ta reda p� hur m�nga byte en viss datatyp �r. Exempelvis sizeof(double), eller sizeof(char).

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
