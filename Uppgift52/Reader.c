#include<stdio.h>


void ReadVariable(int *actionPointer, char *variablePointer){
int flag = 0;
printf("Pekaren pekar p\x86 %c, v\x84lj en operation\n1) Addera 1\n2) Multiplicera med 2\n3) Subtrahera 3\n4) Avsluta programmet\n",*variablePointer);
while ((flag = scanf("%i",actionPointer) <= 0) || (*actionPointer <=0 || *actionPointer >4)){
    while((getchar()) != '\n');
    printf("Du matade inte in n\x86got av alternativen\nTalet \x84r %c, v\x84lj en operation\n1) Plus 1\n2) Minus 1\n3) Starta fr\x86n b\x84rjan\n4) Avsluta programmet\n",*variablePointer);
}
while((getchar()) != '\n');
}
