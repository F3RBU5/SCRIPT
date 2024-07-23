#include <stdio.h>

int main() {

double weight;
int x;
const char *stelle[] = {
        "Mercurio", "Venere", "Marte", "Giove", "Saturno", "Urano", "Nettuno"
    };

printf("Benvenuto nel programma di conversione del peso per combattenti interstellari!\n");
printf("Le conversioni sono possibili per le stelle di seguito:\n\n");
printf("- Mercurio\n- Venere\n- Marte\n- Giove\n- Saturno\n- Urano\n- Nettuno\n\n");

printf("Inserisci qui il tuo peso corporeo: ");
scanf("%lf", &weight);

printf("\tSu quale pianeta vuoi combattere:\n\n");
printf("\t1) Mercurio\t2) Venere\t3) Marte\t4) Giove\n\t5) Saturno\t6) Urano\t7) Nettuno\n");
scanf("%d", &x);

if ( x == 1)
    { weight = weight * 0.38; }
else if ( x == 2)
    { weight = weight * 0.91; }
else if ( x == 3)
    { weight = weight * 0.38; }
else if ( x == 4)
    { weight = weight * 2.34; }
else if ( x == 5)
    { weight = weight * 1.06; }
else if ( x == 6)
    { weight = weight * 0.92; }
else if ( x == 7)
    { weight = weight * 1.19; }
printf("\nIl tuo peso corporeo su %s è %.2f kg\n", stelle[ x - 1 ], weight);

return 0;

}