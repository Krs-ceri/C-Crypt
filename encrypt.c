#include "header.h"


void IOencrypt(char * text){
   FILE *fptr;
   fptr = fopen("dest.crt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(EXIT_FAILURE);
   }
   fprintf(fptr,"%s",text);
   fclose(fptr);
}

void encrypt(char * text){
    printf("%s %d\n", text, strlen(text));
    for(int x = 0; x < strlen(text); x++){
        if(x!=0){
            text[x] -= mdp[x%(strlen(mdp))];
        }
        else{
            text[0] -= mdp[0];
        }
    }
    IOencrypt(text);
    printf("\n %s \n", text);
}
