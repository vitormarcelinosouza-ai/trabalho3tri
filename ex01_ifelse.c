#include <stdio.h>

int main() {

     int numero;
     printf ("digite um número\n");
     scanf ("%d",&numero);
     if(numero%2==0){
               
         printf(" Seu numero é par\n");
            }
            else{
               
                printf(" Seu numero é impar\n");
            }
            if(numero > 0){
                printf("\n O número é POSITIVO. \n", numero);
            }
            else if(numero < 0){
                printf(" \nO número é NEGATIVO. \n", numero);
            }
            else{
            printf("\n O número é igual à zero. \n", numero);
            }
            return 0;
}  

