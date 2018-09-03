/*1.2.2 Formaterad utmatning av tal � 1p
Skriv ett program som l�ser in tv� heltal, l�t oss kalla dem P och Q.
 Anv�nd funktionen printf f�r att producera f�ljande utskrifter fr�n programmet:
    � Talet P p� hexadecimal form, � Talet P/Q p� flyttalsform med exakt 3 decimaler,
    � Talet P%Q p� heltalsform � Talet Q*P p� tiopotensform (�scientific notation�),
    � Talet Q med nollpadding till totalt 9 siffror (ex: 747 skrivs 000000747)

Tips: Ang�ende heltalsdivision, vad �r skillnaden p� P/Q och (float)P/Q? */

#include <stdio.h>
void ReadVariable(int *flagPointer, int *pPointer, int *qPointer){
int flag = 0;
printf("Put in the integer numbers P and Q:\nP = ");
while ((flag = scanf("%i",pPointer) <= 0)){
    while((getchar()) != '\n');
    printf("\nDu matade inte in ett heltal\n\nP = ");
}

printf("Q = ");
while((getchar()) != '\n');
flag = 0;
while ((flag = scanf("%i",qPointer) <= 0)){
    while((getchar()) != '\n');
    printf("\nDu matade inte in ett heltal\n\nQ = ");
}
*flagPointer = flag;
}

int main(){

int P; int Q; int flag; int *pPointer; int *qPointer; int *flagPointer;

flagPointer = &flag;
pPointer = &P;
qPointer = &Q;

ReadVariable(flagPointer,pPointer,qPointer);


    printf("Number P in hexadecimal form is:\t %x\n",P);
    printf("Number P%Q in integer form is:\t\t %d\n",P%Q);
    printf("Number Q in integer form with padding:\t %09d\n",Q);

    return(0);
}
