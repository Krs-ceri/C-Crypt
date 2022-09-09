#include "header.h"

/** \brief
 *
 * \return int
 *
 */
int readPassword()
{
    FILE* ptr;
    char *buff;
    ptr = fopen(PASSWORD, "r");
    if (NULL == ptr) {
        printf("Error!");
        return 0;
    }
    fscanf(ptr, "%s", buff);
    mdp = buff;
    fclose(ptr);
    return 1;
}

/** \brief
 *
 * \return int
 *
 */
int readTexte()
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(SOURCE, "r");
    if (fp == NULL)
        return 0;
    printf("Lecture!\n");
    while ((read = getline(&line, &len, fp)) != -1) {
        texte = line;
        encrypt();
    }
    fclose(fp);
    if (line)
        free(line);
    int suppr = remove(SOURCE);
    if(suppr == 0) printf(" %s a etait supprimer\n",SOURCE);
    else printf(" %s n'a pas pus etre supprimer\n",SOURCE);
    return 1;
}

