// librerie necessarie 
#include <stdio.h>
#include <string.h>
#include <sdlib.h>



int main (argc, argv[]){
//dichiarazione della variabile riga che deve contenere 30 caratteri
char *riga[]
int carcol
    FILE *fh
//controllo sugli argomenti passati perché argv[1] è l'articolo da aprire e in argv[2] c'è il numero di caratteri di una riga da incolonnare
    if (argc<2){
    printf("Non hai messo il nome dell'articolo\n")
    }
    if (argc<3){
    printf("Non hai messo il numero di caratteri della colonna\n")
    }
//aprire il file dell'articolo che è in argv[1]
    carcol==argv[2];
    fh=fopen(argv[1], 'r');
//ipotizzando che alla fine del file 'articolo' ci sia un NULL 
//utilizzare un ciclo while che vada a leggere il file fino al null e stampi le righe per stringhe del numero di caratteri in argv[2]
    while (fgets(riga, sizeof(riga),fh)!=NULL){
        printf("%\n", &(riga));
        carcol==carcol+carcol;
        riga==riga[carcol];
    }
    fclose(fh);
    return(0)
}