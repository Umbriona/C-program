/*
1.5.3 Minnesadresser - 1p Pekarvariabler �r helt enkelt heltal som kan tolkas som en viss position i datorns minne: en adress.
Anledningen till att vi inte bara anv�nder heltal �r att pekare har en egen matematik.
 11

Skriv ett program som skapar tre pekarvariabler: en int*, en char* och en double*.
Initiera dem till adressen 0 och skriv ut dem som tal med printf (anv�nd %i).
 Addera sedan 1 till alla tre variablerna och skriv ut dem igen.

Vad f�r du f�r resultat? Varf�r �r det p� detta s�tt?
*/
#include<stdio.h>

int main(){

int *intPekare; char *charPekare; double *floatPekare;

intPekare = NULL;
charPekare = NULL;
floatPekare = NULL;

printf("intPekare = %i\ncharPekare = %i\nfloatPekare = %i\n",intPekare,charPekare,floatPekare);
intPekare +=1;
charPekare +=1;
floatPekare +=1;
printf("intPekare = %i\ncharPekare = %i\nfloatPekare = %i\n",intPekare,charPekare,floatPekare);
}
