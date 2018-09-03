/*
1.5.4 Fält - 1p Att deklarera ett fält av variabler (en array)
är i princip ett sätt att allokera en viss mängd minne och få en
pekare till det första elementet. Förklara vad som händer i de
två programsegmenten nedan och ange speciellt var det finns fel
som går igenom en kompilering men ändå inte gör det man kan tänka
sig var det förväntade.

a) double dblField [100];  . . .  dblField = dblField + 10;

b) double dblField [100], *pDblField;  . . .  pDblField = dblField + 10;
*/

#include<stdio.h>

int main(){
/*
double dblFielda [100];
dblFielda = dblFielda + 10;
*/ // Fel, man kan inte initiera arr
double dblFieldb [100], *pDblFieldb;
pDblFieldb = dblFieldb + 10; // sätter en ny pointer till det tioned värdet i fältet.
return 0;
}
