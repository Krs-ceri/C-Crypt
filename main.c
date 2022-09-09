#include "header.h"

int main()
{
    int x;
    if(readPassword() == 0) exit(EXIT_FAILURE);
    do{
        printf("\n1 = Encrypt\n");
        printf("2 = Decrypt\n");
        printf("0 = Quitter\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                if(readTexte()==0) printf("\nErreur : fichier %s non trouver\n" , SOURCE);

                break;
            case 2:
                 if(IOdecrypt()==0) printf("\nErreur : fichier non trouver\n", DEST);

                break;
            default:
                if(x != 0) printf("\nErreur\n");
        }
    }while(x != 0);
    printf("Au revoir\n");
    return 0;
}

