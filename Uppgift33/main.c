/*1.3.3 while- och case-satser - 2p

Skriv ett program som låter användaren manipulera ett heltal genom en meny.
 Talet är från början lika med 0, och användaren erbjuds följande val i en meny:
        1) Addera 1
        2) Multiplicera med 2
        3) Subtrahera 3
        4) Avsluta programmet

Vid val 1-3 utförs operationen, och användaren kommer tillbaka till menyn.
 Vid val 4 avslutas programmet.
Om användaren matar in något annat så skall programmet hantera det på något lämpligt vis.
Tips: använd en case-sats för användarens val i menyn,
och en while-sats för att repetera programmet tills användaren väljer att avsluta.
Detta är ett vanligt mönster som du kan återanvända i andra program!
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
