/*
1.3.5 Formattering och gränser - 1p
Skriv ett program som beräknar och skriver ut (med lämplig formatering) resultat från funktionen:
   f(x) = 4x3 + 3x2 - 5x - 10

Programmet ska beräkna funktionen med följande gränser:
i) Samtliga heltal x [-15,15]
ii) Samtliga x [-1,1] med en upplösning i x på 0.

*/

#include <stdio.h>
#include <math.h>

int main(){
    int xi[31];
    float xii[21],fii[21],fi[31];

    xii[0] = -1;
    for(int i=0;i<32;i++)xi[i] = i-15;
    for(int i=1;i<22;i++)xii[i] = xii[0]+0.1*i;
    for(int i=0;i<32;i++)fi[i] = 4 * pow(xi[i],3) + 3 * pow(xi[i],2) - 5 * xi[i] - 10;
    for(int i=1;i<22;i++)fii[i] = 4 * pow(xii[i],3) + 3 * pow(xii[i],2) - 5 * xii[i] - 10;
    printf("i)\t\t\tii)\n");
    for(int i =0; i<32;i++)printf("%f\t\t\t%f\n",fi[i],(i < 22) ? fii[i] : 0);
}
