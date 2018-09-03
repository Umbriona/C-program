/*1.3.3 while- och case-satser - 2p

Skriv ett program som l�ter anv�ndaren manipulera ett heltal genom en meny.
 Talet �r fr�n b�rjan lika med 0, och anv�ndaren erbjuds f�ljande val i en meny:
        1) Addera 1
        2) Multiplicera med 2
        3) Subtrahera 3
        4) Avsluta programmet

Vid val 1-3 utf�rs operationen, och anv�ndaren kommer tillbaka till menyn.
 Vid val 4 avslutas programmet.
Om anv�ndaren matar in n�got annat s� skall programmet hantera det p� n�got l�mpligt vis.
Tips: anv�nd en case-sats f�r anv�ndarens val i menyn,
och en while-sats f�r att repetera programmet tills anv�ndaren v�ljer att avsluta.
Detta �r ett vanligt m�nster som du kan �teranv�nda i andra program!
*/

#include <stdio.h>
#include <stdlib.h>

void ReadVariable(int *actionPointer, int *variablePointer){
int flag = 0;
printf("Talet \x84r %d, v\x84lj en operation\n1) Addera 1\n2) Multiplicera med 2\n3) Subtrahera 3\n4) Avsluta programmet\n",*variablePointer);
while ((flag = scanf("%i",actionPointer) <= 0) || (*actionPointer <=0 || *actionPointer >4)){
    while((getchar()) != '\n');
    printf("Du matade inte in n\x86got av alternativen\nTalet \x84r %d, v\x84lj en operation\n1) Addera 1\n2) Multiplicera med 2\n3) Subtrahera 3\n4) Avsluta programmet\n",*variablePointer);
}
while((getchar()) != '\n');
}

int main(){
int action , *actionPointer, variable, *variablePointer;
action = 0;
variable = 0;
actionPointer = &action;
variablePointer = &variable;

while(action != 4){
    ReadVariable(actionPointer, variablePointer);
    switch(action){
        case 1:
            variable += 1;
            break;
        case 2:
            variable *=2;
            break;
        case 3:
            variable -=3;
            break;
        case 4:
            exit(0);
            break;
    }
}
}
