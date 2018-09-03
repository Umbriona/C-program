/*
1.5.6 Sortering – 2p Skriv ett program som med olika funktioner sorterar 10
inmatade textsträngar först med avseende på längd och därpå i bokstavsordning.
Presentera resultatet med lämplig formatering. Berätta för användaren vilka begränsningar som finns i programmet.
*/


#include<stdio.h>
#include <stdlib.h>
#include<math.h>

void ReadVariable(int *numVariablePointer){
    int flag = 0;
    printf("Hur m\x86nga meningar vill du sortera?");
    while ((flag = scanf("%i",numVariablePointer) <= 0) || (*numVariablePointer <=0 || *numVariablePointer >100)){
        while((getchar()) != '\n');
            if(*numVariablePointer <=100){
                printf("Det här programmet hanterar inte sortering av fler än 100 meningar!\n");
                printf("Hur m\x86nga meningar vill du sortera?");
            }
            else
                printf("Du matade inte in en ett antal! Hur m\x86nga meningar vill du sortera?");
    }
    while((getchar()) != '\n');
}



int main(){
    int  *numVariablePointer,numVariable = 10, counter1, counter2;
    char  *buffert;
    numVariablePointer = &numVariable;
    ReadVariable(numVariablePointer);
    printf("%d\n",numVariable);
    buffert  = malloc(numVariable*100 * sizeof(char));
    int str[numVariable];

    counter1 = 0;
    counter2 = 1;
    for(int i=0; i < numVariable; i++){
        str[i] = buffert[counter1];
        while((buffert[counter1]=getchar())!='\n'){
            counter1++;
            if(counter1%(numVariable * 100-1) == 0){
                counter2++;
                realloc(buffert, numVariable * 100 * counter2 * sizeof(char));
            }
        }
        counter1++;
        buffert[counter1]='\0';
        counter1++;
    }




    free(buffert);
    free(str);
    return 0;
}
