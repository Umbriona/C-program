 /*1.3.1 Operatorer - 1p Vad blir resultaten av f�ljande operationer?
  L�s detta moment utan dator och visa steg f�r steg f�r varje uttryck.
   Antag att f�ljande definitioner finns: int a=1, b=2, c=3;
    a) a & ~b & ~c = 0
    b) a & ~b & c = 1
    c) a && b & c = 0
    d) a ^ b & c = 3
    e) a & b & ~c = 0
    f) a | b & c = 3

Tips: vad �r den bin�ra representationen av talen 1, 2 och 3?
*/
#include <stdio.h>

int main(){
int a, b, c;
a=(!(1==0)+(0==1)*1)+(1||1&&0);
b=2;
c=3;

printf("%d",a);
}
