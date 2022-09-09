#include "header.h"

int main()
{
    int x;
    char text[] = "nizar";
    if(readPassword(PASSWORD) == 0) exit(EXIT_FAILURE);
    printf("------------ %s \n", text);
    do{
        printf("1 = Encrypt\n");
        printf("2 = Decrypt\n");
        printf("0 = Quitter\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                encrypt(&text);
                break;
            case 2:
                decrypt(&text);
                break;
            default:
                printf("\nErreur\n");
        }
    }while(x != 0);
    printf("Au revoir\n");
    return 0;
}

