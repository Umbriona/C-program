#include<stdio.h>
int main(){
int variabel; int flag;
printf("Mata in ett heltal:\t");
flag = scanf("%i",&variabel);
if(flag <= 0)
    printf("Du matade inte in ett heltal");
else{
    variabel *= 2;
    printf("\n\nV\x84rdet p\x86 heltalet efter multiplikation med tv\x86 \x84r: %d",variabel);
}

  return 0;
}
