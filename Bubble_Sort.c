#include <stdio.h>

void Bub_Sort(int tab[], int n) {                 // Define a funcao do Bub_Sort;
	
     int troca;
     int x = 0;
     int y = 0;
    
    for (x; x < n - 1; x++) {                    // Loop externo, controla o o numero de passagens pelo array. Comeca no 0 e vai ate n-1;
        for (y = 0; y < n - x - 1; y++) {        // Loop interno, percorre os elementos do array até n - x - 1, ou seja x diminui apos cada passagem do loop externo;
             if (tab[y] > tab[y + 1]) {          // Comparacao para a ordenacao, elemento na posicao for maior que o elemento y + 1 eles estao trocados;
                 troca  = tab[y];                // Faz a troca dos elementos;
                 tab[y] = tab[y + 1];
                 tab[y + 1] = troca;
            }
        }
    }
}

int main() {
	
	int i = 0; 
    int tab[] = {6, 3, 2, 1, 5, 4};              // Array de inteiros desorganizados
    int n = sizeof(tab) / sizeof(tab[0]);       // Calcula o numero de elemntos dividindo os dois, trazendo assim a quantidade de elementos;                     

    printf("Array original:\n");                // Mensagem informado o array original;
    for (i; i < n; i++) {                       // Loop percorre todos os elementos e imprime cada um deles;
        printf("%d ", tab[i]);
    }
    printf("\n");

    Bub_Sort(tab, n);                            // Chama a funcao BubSort

    printf("\n");
    printf("Array ordenado do Bubble Sort:\n"); // Mensagem informado o array ordenado;
    for (i = 0; i < n; i++) {                   // Loop percorre todos os elementos e imprime cada um deles ja ordenados;
        printf("%d ", tab[i]);
    }
    printf("\n");

return 0;
}
