#include "header.h"

int readPassword(char * texte)
{
    FILE* ptr;
    char *buff;
    ptr = fopen(texte, "r");
    if (NULL == ptr) {
        printf("Fichier non présent ou non lu \n");
        return 0;
    }
    fscanf(ptr, "%s", buff);
    mdp = buff;
    fclose(ptr);
    return 1;
}
