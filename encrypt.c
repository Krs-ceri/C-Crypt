#include "header.h"


/** \brief
 *
 * \param text char*
 * \return void
 *
 */
void IOencrypt(char * text){
   FILE *fptr;
   fptr = fopen(DEST,"a");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(EXIT_FAILURE);
   }
   fprintf(fptr,"%s",text);
   fclose(fptr);
}

/** \brief
 *
 * \return void
 *
 */
void encrypt(){
    printf("Encrypt!\n");
    int index = 0;
    char encrypt[strlen(texte)];
    for(int x = 0; x < strlen(texte); x++){
        if(x!=0){
            encrypt[x] = texte[x] - mdp[index];
        }
        else{
            encrypt[0] = texte[0] - mdp[index];
        }
        index++;
        if(index > strlen(mdp)-1) index = 0;
    }
    for(int x=0; x <strlen(encrypt); x++){
        printf("%c", encrypt[x]);
    }
    printf("\n");
    IOencrypt(encrypt);
}
