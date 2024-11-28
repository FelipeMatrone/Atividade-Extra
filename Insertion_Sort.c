#include <stdio.h>

void Insert_Sort(int tab[], int n) {               // Define a funcao do Insert_Sort;
	
    int x, y, tmp;

    for (x = 1; x < n; x++) {                     // Loop comeca x = 1 e vai até x < n. O laço percorre o vetor a partir do segundo elemento (índice 1), porque o primeiro elemento já está "ordenado";
        y = x;                                    // Variavel Y de comeco e igual ao X, apos o for coemca a verificar o elemento do indice 1, que seria o segundo da lista;
        
        while (y > 0 && tab[y] < tab[y - 1]) {    // Laco feito com while que continua enquanto o y nao for negativo e quando o elemento atual e menor que o elemento anterior
               tmp = tab[y];                      // Faz a troca dos elementos;
               tab[y] = tab[y - 1];               // Valor movido para tab[y]
               tab[y - 1] = tmp;                  
               
            y = y - 1;                           // Apos a troca o y vai para a posicao anteiror, isso faz com que o algoritmo continue fazendo as comparaceos ate o numero estar no lugar certo;
        }
    }
}

void array(int tab[], int n) {                   // Define funcao array;
	
	int i = 0;
	
    for (i = 0; i < n; i++) {                   // Loop que percorre todos os elementos, desde o indice 0 ate n-1
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
	
    int tab[] = {6, 4, 3, 5, 2, 1};            // Vetor de inteiros desorganizados
    int n = sizeof(tab) / sizeof(tab[0]);      // Calcula o numero de elemntos dividindo os dois, trazendo assim a quantidade de elementos;  
    
    printf("Array original:\n");               // Mensagem informado o array original;
    array(tab, n);                             // Loop percorre todos os elementos e imprime cada um deles;

    Insert_Sort(tab, n);                       // Chama a funcao InsertSort

    printf("\n");
    printf("Array ordenado do Insertion Sort:\n");       // Mensagem informado o array ordenado;
    array(tab, n);                                       // Loop percorre todos os elementos e imprime cada um deles ja ordenados;

return 0;
}
