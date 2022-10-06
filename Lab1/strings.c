#include <string.h>
#include <stdio.h>

int main(){
    char str1[32];
    char str2[64];
    strcpy(str1, "alfa"); //inizia str1 con alfa
    strcpy(str2, str1); // copia il valore di str1 in str2
    strlen(str1); //da la lunghezza di str1 senza il terminatore \0

    printf("%s", str1); // stampa il valore di str1 %s è il simbolo della stringa
    scanf("%s", str1); //funziona come la solita scanf ma anche senza & davanti al nome della variabile
                       //per la scanf la fine della stringa è o una newline o uno spazio con lo spazio però non termina
    strcmp(str1, str2); //confornta due stringhe in ordine alfabetico: returns 0 se sono uguali, altrimenti un intero pari alla distanza tra i primi due caratteri diversi delle due stringhe

}