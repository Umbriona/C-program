/*
1.5.1 Pekare, avreferering och adresser � 3p

a) Om vi har deklarationerna int�heltal	�=�10;� int�*pekare_till_heltal�=	�&heltal;
Vilka av f�ljande uttryck resulterar i en utskrift av talet 11? (och varf�r? Testa!)
1) 	printf("%i\n",�pekare_till_heltal�+�1);	�
2)� printf("%i\n",�heltal+1);�
3)� printf("%i\n",�*(&heltal)+1);
4)� printf("%i\n",�*(pekare_till_heltal�+�1));
5)� printf("%i\n",�*pekare_till_heltal�+�1);
6)� printf("%i\n",�&heltal�+�1);

b) Du har m�nga g�nger anv�nt funktionen�scanf(�%d�,�&heltal);
Vad g�r &-tecknet egentligen s� att scanf fungerar som den g�r?

c) G�r ett program med funktionen dubblera som i uppgift 1.4.2,
men anv�nd en pekare f�r att f� det att fungera.
dubblera har nu allts� deklarationen void dubblera(int�*x)
