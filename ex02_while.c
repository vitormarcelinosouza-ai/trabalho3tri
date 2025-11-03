#include <stdio.h>

int main() {
   
    int numero;            
    int soma = 0;    
    int quantidade = 0;    
    float media = 0.0;     
    int i = -1;

    printf("        Calculo de Soma e Media (i)\n");
    printf("Digite numeros inteiros. Digite %d para encerrar e ver os resultados.\n\n", i);
    scanf("%d", &numero);
    printf("Digite um numero: ");
    
  
    while (numero != -1) {
        
     
        soma += numero;   
        quantidade++;     
        
        printf("Digite o proximo numero (ou %d para finalizar): ", i);
        scanf("%d", &numero);
     
        }


    if (quantidade > 0) {
        media = soma / quantidade;

        printf("Quantidade de numeros inseridos (sem o %d): %d\n", i, quantidade);
        printf("Soma total: %d\n", soma);
        printf("Media dos numeros: %f\n", media); 
    } 

    return 0;
}
