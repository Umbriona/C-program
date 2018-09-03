/*
1.3.4 V�xelkassa � 2p

N�r du handlar i en aff�r och betalar kontant f�r du kanske v�xel tillbaka.
I regel f�r aff�rsbitr�det hj�lp av kassaapparaten med att ber�kna summan man ska f� tillbaka,
men inte alltid vilka sedlar och mynt som ska l�mnas tillbaka.
Skriv ett program som ber�knar den v�xel bitr�det ska ge tillbaka i samband med ett k�p.
Programmet ska, f�rutom att presentera beloppet kunden f�r tillbaka avrundat till n�rmsta 50-�ring,
�ven best�mma vilka, och antalet, sedlar och mynt. Kunden ska f� s� f� sedlar och mynt som m�jligt tillbaka.
Programmet ska kunna ge v�xel tillbaka med sedlar av val�rerna 1000, 500, 100, 50 och 20
samt mynten 10, 5, 1 och 50-�ring. Du kan anta att det alltid finns tillr�ckligt antal av de sedlar och mynt som kr�vs.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define DENOMINATION_NUMBER 9

void ReadVariable(float *varornasKostnadPointer, float *betalningsmedelPointer){
int flag = 0;
printf("Ange varornas kostnad i kr: ");
while ((flag = scanf("%f",varornasKostnadPointer) <= 0) || *varornasKostnadPointer <=0 ){
    while((getchar()) != '\n');
    printf("Du matade inte in n\x86gon kostnad f\x94r varorna\n Ange varornas kostnad i kr: ");
}
while((getchar()) != '\n');
printf("F\x94r att r\x84kna fram v\x84xel ange hur mycket du betalar med i kr: ");
while ((flag = scanf("%f",betalningsmedelPointer) <= 0) || *betalningsmedelPointer <=0 || *varornasKostnadPointer > *betalningsmedelPointer){
    while((getchar()) != '\n');
    if(*varornasKostnadPointer > *betalningsmedelPointer)
        printf("Dina varor kostar mer \x84n du har betalat\n F\x92r att r\x84kna fram v�xel ange hur mycket du betalar med i kr: ");
    else
        printf("Du matade inte in hur mycket du betalade\n F\x92r att r\x84kna fram v�xel ange hur mycket du betalar med i kr: ");
}
}

void CountChange(float *varornasKostnadPointer, float *betalningsmedelPointer,int *denominations,float *denominationValues){
    float dif;
    int temp;

    dif = *betalningsmedelPointer - *varornasKostnadPointer;

    for(int i=0; i<9; i++){
            temp = trunc(dif/denominationValues[i]);
            if(temp > 0){
                denominations[i] = temp;
                printf("%d",temp);
                dif -= temp*denominationValues[i];
            }
    }
}

int main(){
    float varornasKostnad, *varornasKostnadPointer, betalningsmedel, *betalningsmedelPointer;
    int denominations[DENOMINATION_NUMBER];
    float denominationValues[DENOMINATION_NUMBER];

    for(int i=0; i<9; i++) denominations[i] = 0;
    varornasKostnadPointer = &varornasKostnad;
    betalningsmedelPointer = &betalningsmedel;
    denominationValues[0] = 1000;
    denominationValues[1] = 500;
    denominationValues[2] = 100;
    denominationValues[3] = 50;
    denominationValues[4] = 20;
    denominationValues[5] = 10;
    denominationValues[6] = 5;
    denominationValues[7] = 1;
    denominationValues[8] = 0.5;

    ReadVariable(varornasKostnadPointer, betalningsmedelPointer);
    CountChange(varornasKostnadPointer, betalningsmedelPointer, denominations, denominationValues);

    printf("Du ska f\x86 tillbaks\n%d tusenlappar\n%d femhundralappar\n%d hundralappar\n%d femtiolappar\n%d tjugolappar\n%d tior\n%d femmor\n%d enkronor\n%d femtio\x94ringar",
             denominations[0], denominations[1], denominations[2], denominations[3], denominations[4], denominations[5], denominations[6], denominations[7], denominationValues[8]);
    return 0;

}
