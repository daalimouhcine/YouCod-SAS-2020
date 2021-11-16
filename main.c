#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ---- les presidents ----
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

    // ---- les electeurs ----

    int numElect;
    printf("\nEnter le nombre des electeurs : ");
    scanf("%d", &numElect);

    while(numElect < 10){
        printf("tu dois entrer 10 ou plus : ");
        scanf("%d", &numElect);
    }

    char electeurs[numElect][20];
    for(int i = 0; i < numElect ; i++){
        printf("Identifiant CIN du electeur N%d : ", i+1);
        scanf("\n");
        scanf("%[^\n]s", electeurs[i]);
    }

    system("cls");

    printf("\n       ****** les presidents ******");
    for(int i = 0; i < numPres; i++){
        printf("\nLe president numero %d est : %s.", i+1, presidents[i]);
    }
    printf("\n           ****** ****** ******");

    // premier tour:

    printf("\n*********** Le Premier tour est commmencer ***********\n");


    int isEqual = 1;
    int votes[numPres];

    do{


        for(int i = 0 ; i < numPres; i++){
            votes[i] = 0;
        }


        for(int i = 0 ; i < numElect ; i++){
            int n = 0;
            printf("\nl'electeur N%d, qu'il est le president que tu veux le vote : ", i+1);
            scanf("%d", &n);

            while(n > numPres || n < 0) {
               printf("\nle numero de president que tu entrer est pas corect. \n\t\tessayer autre fois : ", i+1);
               scanf("%d", &n);
            }
            votes[n-1]++;
        }



         int test;
         for(int i = 1 ; i < numPres ; i++){
            test = votes[i];
            if(test != votes[i-1]){
                isEqual = 0;
            }
        }

        if(isEqual == 1 ){
            system("cls");
            printf("\n       ****** les presidents ******");
            for(int i = 0; i < numPres; i++){
                printf("\nLe president numero %d est : %s.", i+1, presidents[i]);
            }
            printf("\n           ****** ****** ******");
            printf("\n ***** tout les presidents est le meme vote, en a commencer auter fois. ***** \n");

        } else {
            break;
        }


    } while (isEqual == 1);





    system("cls");

    printf("\n*********** les presidents qui en celectionner pour ld deuxeme toure ***********\n");

    int numOfExites = 0;

    for(int i = 0 ; i < numPres ; i++){
        if((votes[i]*100)/numElect <= 15){
            votes[i]
        }
    }

    for(int i = 0 ; i < numPres ; i++){
        printf("\nle president numero %d il va %d des votes.\n", presidents[i], votes[i]);
    }

    printf("\n*********** Le Premier tour est commmencer ***********\n");



    // deuxeme tour:

    return 0;
}
