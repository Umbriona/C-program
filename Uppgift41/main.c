#include"convert.h"
#include<stdio.h>

int main(){
float distM,distMM;
scanf("%f",&distM);
distMM = M2MM(distM);
printf("Distence in meter: %f\nDistence in milimeter: %f",distM,distMM);
}
