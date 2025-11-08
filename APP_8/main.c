#include <stdlib.h>
#include <stdio.h>
#include <string.h>





struct participant
{
    int cin;
    char nom[20];
    char prenom[20];
    int repas;
    int hotel;
};
typedef struct participant participant;

int main()
{
    int choix,i,n,choix_repas,choix_hotel;
    n= 0;
    participant p[100];
    int dejeuner,diner,prix_tot;
    int H,R;
    do
    {
        do
        {
            printf("----------MENU-------------\n");
            printf("1- Ajouter un participant\n");
            printf("2- Calculer pour un participant le montant de sa facture\n");
            printf("3- Afficher les informations des participants qui ont choisi de réserver un hôtel 4 etoiles\n");
            printf("4- Supprimer un participant donne par son identifiant\n");
            printf("0-Quitter\n");
            scanf("%d", &choix);
        }
        while(choix<0||choix>4);

        switch (choix)
        {
        case 1:
            printf("Entrez le nom\n");
            scanf("%s",p[n].nom);
            printf("Entrez le prenom\n");
            scanf("%s",p[n].prenom);
            printf("Entrez le numero de CIN\n");
            scanf("%d",&p[n].cin);
            do
            {
                printf("Choisissez un type de repas (dejeuner d'un montant de 15 DT (1), diner d'un montant de 35 DT(2), aucun(0))\n");
                scanf("%d",&choix_repas);
                if(choix_repas==1)
                {
                    printf("Vous avez choisi un dejeuner\n",p[n].repas);
                    p[n].repas=15;
                }
                else if(choix_repas==2)
                {
                    printf("Vous avez choisi un diner\n",p[n].repas);
                    p[n].repas=35;
                }
                else if(choix_repas==3)
                {
                    printf("Vous avez choisi un dejeuner et un diner\n",p[n].repas);
                    p[n].repas=35+15;
                }
                else
                {
                    p[n].repas=0;
                }
            }
            while(choix_repas>3||choix_repas<0);
            printf("Voulez-vous reserver un hotel ? (1 = Oui / 0 = Non) : ");
            scanf(" %d", &H); // <-- espace ajouté ici
            if (H == 1)
            {
                do
                {
                    printf("Choisissez le type d'hotel :\n");
                    printf("4 - 4 etoiles (75 DT)\n");
                    printf("5 - 5 etoiles (100 DT)\n");
                    scanf(" %d", &choix_hotel); // <-- espace ici aussi

                    if (choix_hotel == 4)
                        p[n].hotel = 75;
                    else if (choix_hotel == 5)
                        p[n].hotel = 100;
                    else
                        printf("Choix invalide !\n");

                }
                while (choix_hotel != 4 && choix_hotel != 5);
            }
            else
            {
                p[n].hotel = 0;
            }
            printf("participant ajoute\n");
            n++;
            break;
        case 2 :
            prix_tot=p[n].hotel+p[n].repas;
        case 3:
            if (p[n].hotel==4)
            {
                printf(p[n].nom);
                printf(p[n].prenom);
                printf(p[n].cin);
            }
            break;

        case 4:




            break;

        }
    }
    while(choix!=0);


    return 0;



}
