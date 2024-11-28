#include <stdio.h>

void Selct_sort(int tab[], int n) {              // Definida funcao Select_Sort;
	
     int x, y, troca;                            // Declaracao das variavies;
     for (x = 0; x < n - 1; x++) {               // Laco de repeticao externo;
          for (y = x + 1; y < n; y++) {          // Laco de repeticao interno pega o menor valor;
               if (tab[y] < tab[x]) {            // Compara os elementos do tab[y] com o elemento da posicao tab[x];
                  troca    = tab[x];             // Faz a troca dos elementos;
                  tab[x] = tab[y];
                  tab[y] = troca;
            }
        }
    }
}

void array(int tab[], int n) {                   // Define uma segunda funcao para receber o array tab, n;
	      
   	 int  i = 0;                                 // Declaracao da variavel para o for;
     for (i; i < n; i++) {                       // Inicia o laco de repeticao;
        printf("%d ", tab[i]);                   // Imprime o valor do elemento atual (tab[i]);
    }
    printf("\n");
}

int main() {
	
    int tab[] = {6, 3, 2, 1, 5, 4};                 // Inicializa o array tab com os elementos escolhidos;
    int n     = sizeof(tab) / sizeof(tab[0]);    // Calcula o numero de elemntos dividindo os dois, trazendo assim a quantidade de elementos;;

    printf("Array original:\n");                 // Mensagem informado o array original;
    array(tab, n);                               // Chama funcao array;
    printf("\n");

    Selct_sort(tab, n);                          // Chama funcao para ordenar o array;

    printf("Array ordenado do Selection Sort:\n");  //Imprimir mensagem ordenada;
    array(tab, n);                                   // Chama funcao array;
    
return 0;
}


