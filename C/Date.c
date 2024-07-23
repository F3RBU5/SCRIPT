#include <stdio.h>

int main() {
    int day, month, year;
    const char *suffix;
    int max_days;
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Inserisci il mese (1-12): ");
    scanf("%d", &month);
    printf("Inserisci l'anno: ");
    scanf("%d", &year);
    printf("Inserisci il giorno (1-31): ");
    scanf("%d", &day);

    // Determina il numero massimo di giorni nel mese
    switch (month) {
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            max_days = 30;
            break;
        case 2:  // February
            // Verifica se è un anno bisestile
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                max_days = 29; // Anno bisestile
            } else {
                max_days = 28;
            }
            break;
        default:
            max_days = 31;
    }

    // Verifica che il giorno sia nel range corretto
    if (day < 1 || day > max_days) {
        printf("Giorno non valido. Inserisci un numero tra 1 e %d.\n", max_days);
        return 1;
    }

    // Assegna il suffisso in base al numero del giorno
    if (day == 11 || day == 12 || day == 13) {
        suffix = "th";
    } else if (day % 10 == 1) {
        suffix = "st";
    } else if (day % 10 == 2) {
        suffix = "nd";
    } else if (day % 10 == 3) {
        suffix = "rd";
    } else {
        suffix = "th";
    }

    // Stampa il risultato nel formato desiderato
    printf("%s %d%s, %d\n", months[month - 1], day, suffix, year);

    return 0;
}
