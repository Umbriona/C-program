/*
1.4.2 Funktionsargument � pass by value  - 1p

Skriv ett program med en funktion dubblera, som dubblerar ett tal: void
 �dubblera(int x){
 x = 2*x;
 }
G�r en main-funktion som 1) initierar ett heltal till n�got v�rde,
2) skriver ut det,
3) anv�nder funktionen dubblera p� det och
4) skriver ut talet igen.
a) Vad ger ditt program f�r svar, och varf�r? b) Ge ett f�rslag p� hur man kan g�ra en dubblera-funktion ist�llet.
*/
#include"Manipulate.h"
#include<stdio.h>


int main(){
    int var1; char var2;
    var1 = 22;
    var2 = 'N';
printf("var1 = %i\n",var1);
dubblera(&var1,var2);
printf("var1 * 2 = %i",var1);
return 0;
}
