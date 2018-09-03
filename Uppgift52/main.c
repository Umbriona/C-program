/*
1.5.2 Flyttande pekare – 1p
Gör ett program med en meny liknande uppgift 1.3.3.
Ditt program skall skapa en sträng i minnet: char text[] = "Gothenburg University!";
samt en pekare som pekar på början av strängen:  char* my_pointer = text;
Låt nu användaren manipulera pekaren med menyvalen, och skriv ut vad pekaren pekar på.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Reader.h"



int main(){
int action , *actionPointer; char text[] = "Gothenburg University!", *my_pointer = text;
action = 0;
actionPointer = &action;
my_pointer = text;

while(action != 4){
    ReadVariable(actionPointer, my_pointer);
    switch(action){
        case 1:
            if(*my_pointer == '!')break;
            my_pointer += sizeof(char);
            break;
        case 2:
            if(*my_pointer == 'G')break;
            my_pointer -= sizeof(char);
            break;
        case 3:
            my_pointer = text;
            break;
        case 4:
            exit(0);
            break;
    }
}
}
