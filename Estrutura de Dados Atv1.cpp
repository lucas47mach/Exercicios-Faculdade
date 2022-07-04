#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
int Bubblesort (int vec[]){
   int i, j, tmp;
   for (i = 0; i < tamanho -1; i++){
      for (j = i+1; j < tamanho; j++){
         if (vec[i] < vec[j]){
            troca(&vec[i], &vec[j]);
        }
     }
   }
}
/*struct no {
	int dado;
	struct no *proximo;
};
typedef no *ptr_no;
ptr_no lista;
lista = (ptr_no) malloc(sizeof(no));
lista -> dado =0;
lista -> proximo = NULL;

void lista_mostrar (ptr_no lista) {
	system("cls");
	while(1) {
		printf("%d,", lista -> dado);
		if (lista -> proximo == NULL);
		break;
	}
	lista = lista -> proximo;
}
void lista_mostrar_2 (ptr_no lista) {
	system("cls");
	while (lista -. proximo != NULL) {
		printf("%d", lista -> dado);
		lista = lista -> proximo;
	}
	printf("%d", lista -> dado);
}
void lista_inserir (ptr_no lista) {
	while (lista -> proximo != NULL) {
		lista = lista -> proximo;
	}
	lista -> proximo = (ptr_no) malloc(sizeof(no));
	lista = lista -> proximo;
	lista -> dado = rand()%100;
	lista -> proximo = NULL;
}
ptr_no atual;
atual = (ptr_no) malloc(sizeof(no));
while ((lista -> dado != dado)) {
	atual = lista;
	lista = lista -> proximo;
}

void lista_remover(ptr_no lista) {
	int dado; 
	ptr_no atual;
	atual = (ptr_no) malloc (sizeof(no));
}*/
}
