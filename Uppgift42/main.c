/*
1.4.2 Funktionsargument – pass by value  - 1p

Skriv ett program med en funktion dubblera, som dubblerar ett tal: void
  dubblera(int x){
 x = 2*x;
 }
Gör en main-funktion som 1) initierar ett heltal till något värde,
2) skriver ut det,
3) använder funktionen dubblera på det och
4) skriver ut talet igen.
a) Vad ger ditt program för svar, och varför? b) Ge ett förslag på hur man kan göra en dubblera-funktion istället.
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
