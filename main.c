#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numPres = 0;
    printf("Entrer le nombre de Presidents tu veux : ");
    while(numPres < 5){
        scanf("%d", &numPres);
        if(numPres < 5){
            printf("Le minimum nombre est \"5\", Entrer autre fois :  ");
        }

    }
    char presidents[numPres][20];
    for(int i = 0; i < numPres; i++){
        printf("Le nome de president numero %d : ", i+1);
        scanf("\n");
        scanf("%[^\n]s", presidents[i]);
    }

    system("cls");
    printf("\n       ****** les presidents ******");
    for(int i = 0; i < numPres; i++){
        printf("\nLe president numero %d est : %s.", i+1, presidents[i]);
    }
    printf("\n           ****** ****** ******");
    return 0;
}
