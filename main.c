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


    int isEqualI = 1;
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



         for(int i = 1 ; i < numPres ; i++){
            if(votes[i] != votes[i-1]){
                isEqualI = 0;
            }
        }

        if(isEqualI == 1 ){
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


    } while (isEqualI == 1);



    int presExit[numPres];

    for(int i = 0 ; i < numPres ; i++){
        if((votes[i]*100)/numElect >= 15){
           presExit[i] = 1;

        } else {
            presExit[i] = 0;
        }
    }





    // deuxieme tour:

    system("cls");
    printf("\n*********** les presidents qui en celectionner pour ld deuxieme toure ***********\n\n");
    int n = 0;
    int indexPresSecondTour[n];
    for(int i = 0 ; i < numPres ; i++){

        if(presExit[i] == 1){
            n++;
            printf("Le president numero %d est : %s.\n", n, presidents[i]);
            indexPresSecondTour[n];

        }
    }
    printf("\n*********** Le deuxieme tour est commmencer ***********\n");



    char presidentsII[n][20];
    int r = 0;
    for(int i = 0 ; i < numPres ; i++){
        if(presExit[i] == 1){
           strcpy(presidentsII[r], presidents[i]);
            r++;
        }

    }


    int votesII[n];
    int isEqualII = 1;
    do{


        for(int i = 0 ; i < n ; i++){
            votesII[i] = 0;
        }



        for(int i = 0 ; i < numElect ; i++){
            int v = 0 ;
            printf("\nl'electeur N%d, qu'il est le president que tu veux le vote : ", i+1);
            scanf("%d", &v);
            while(v < 0 || v > n) {
                printf("\nle numero de president que tu entrer est pas corect. \n\t\tessayer autre fois : ", i+1);
                scanf("%d", &v);
            }
            votesII[v-1]++;
        }



        for(int i = 1 ; i < n ; i++){
            if(votesII[i] != votesII[i-1]){
                isEqualII = 0;
            }
        }

        if(isEqualII == 1 ){
            system("cls");
            printf("\n       ****** les presidents ******");
            for(int i = 0; i < n; i++){
                printf("\nLe president numero %d est : %s .", i+1, presidentsII[i]);

            }
            printf("\n           ****** ****** ******");
            printf("\n ***** tout les presidents est le meme vote, en a commencer auter fois. ***** \n");

        } else {
            break;
        }


    } while(isEqualII = 1);



    int presExitII[n];
    int min, posMin;
    for(int i = 0 ; i < n ; i++){
        min = votesII[i];
        if(min < votes[i]){
            min = votes[i];
            posMin = i;
        }
    }
    int numMin = 0;
    for(int i = 0; i < n ; i++){

    }





    // troixieme tour:




    return 0;
}
