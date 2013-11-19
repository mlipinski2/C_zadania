#include <stdio.h>
#include <math.h>
int main()
{
        int wiek, miesiace, dni, godziny, minuty;
        long int sekundy;
                printf ("Podaj swoj wiek: \n");
                scanf("%d", &wiek);
                miesiace = wiek*12;
                dni = wiek * 365;
                godziny = dni * 24;
                minuty = godziny * 60;
                sekundy = minuty * 60;
                printf ("Twoj wiek:\n"
                        "%d miesiecy\n", miesiace
                        "%d dni\n", dni
                        "%d godzin\n", godziny
                        "%d minut\n", minuty
                        "%li sekund \n", sekundy);
                return 0;
}