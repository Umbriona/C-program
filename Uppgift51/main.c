/*
1.5.1 Pekare, avreferering och adresser – 3p

a) Om vi har deklarationerna int heltal	 = 10;  int *pekare_till_heltal =	 &heltal;
Vilka av följande uttryck resulterar i en utskrift av talet 11? (och varför? Testa!)
1) 	printf("%i\n", pekare_till_heltal + 1);	 
2)  printf("%i\n", heltal+1); 
3)  printf("%i\n", *(&heltal)+1);
4)  printf("%i\n", *(pekare_till_heltal + 1));
5)  printf("%i\n", *pekare_till_heltal + 1);
6)  printf("%i\n", &heltal + 1);

b) Du har många gånger använt funktionen scanf(”%d”, &heltal);
Vad gör &-tecknet egentligen så att scanf fungerar som den gör?

c) Gör ett program med funktionen dubblera som i uppgift 1.4.2,
men använd en pekare för att få det att fungera.
dubblera har nu alltså deklarationen void dubblera(int *x)
