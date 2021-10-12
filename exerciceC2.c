#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b )
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main(void)
{
     int a, b ;  // declaration des variable
        printf("entrer le premier entier :\n"); // demander le premier nombre

            scanf("%i", &a); // attribution d'une valeur entrée par l'utilisateur pour a

        printf("entrer le deuxieme entier :\n");//demander le deuxieme nombre

            scanf("%i", &b); // attribution d'une valeur entrée par l'utilisateur pour b

  
        printf("les entiers avant l'echange :\n%i %i :\n", a, b); // affichage des entiers après l'échange

   
            swap(&a, &b); // appel de la fonction Swap.

       
        printf("les entiers apres l'echange:\n%i %i :\n", a, b); // affichage des entiers après l'échange 
}
