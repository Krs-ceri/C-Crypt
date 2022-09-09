#include "header.h"


/** \brief
 *
 * \return int
 *
 */
int IOdecrypt(){
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(DEST, "r");
    if (fp == NULL)
        return 0;
    printf("Lecture du fichier %s!\n", DEST);
    while ((read = getline(&line, &len, fp)) != -1) {
        texte = line;
        printf("%s\n", texte);
        decrypt();
    }

    fclose(fp);
    if (line)
        free(line);
}

/** \brief
 *
 * \return void
 *
 */
void decrypt(){
    printf("Decrypt!\n");
    int index = 0;
    char encrypt[strlen(texte)];
    for(int x = 0; x < strlen(texte); x++){
        if(x!=0){
            encrypt[x] = texte[x] + mdp[index];
        }
        else{
            encrypt[0] = texte[0] + mdp[index];
        }
        index++;
        if(index > strlen(mdp)-1 || encrypt[x] =='\n') index = 0;
    }
    printf("%s \n", encrypt);
}
