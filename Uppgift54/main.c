/*
1.5.4 F�lt - 1p Att deklarera ett f�lt av variabler (en array)
�r i princip ett s�tt att allokera en viss m�ngd minne och f� en
pekare till det f�rsta elementet. F�rklara vad som h�nder i de
tv� programsegmenten nedan och ange speciellt var det finns fel
som g�r igenom en kompilering men �nd� inte g�r det man kan t�nka
sig var det f�rv�ntade.

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
pDblFieldb = dblFieldb + 10; // s�tter en ny pointer till det tioned v�rdet i f�ltet.
return 0;
}
