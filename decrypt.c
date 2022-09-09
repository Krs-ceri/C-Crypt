#include "header.h"


void IOdecrypt(char * text){
   FILE *fptr;
   fptr = fopen("dest.crt","w");
   char *buff;
   if(fptr == NULL)
   {
      printf("Error!");
      exit(EXIT_FAILURE);
   }
   fscanf(fptr, "%s", buff);
   decrypt(buff);
   fclose(fptr);
}

void decrypt(char * text){
    printf("%s %d\n", text, strlen(text));
    for(int x = 0; x < strlen(text); x++){
        if(x!=0){
            text[x] += mdp[x%(strlen(mdp))];
        }
        else{
            text[0] += mdp[0];
        }
    }
    printf("\n %s \n", text);
}
