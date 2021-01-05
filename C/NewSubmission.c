#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	char character;
	int frequency_of_character;
	struct node *next;
}node;

//Criando lista vazia
node* create_linked_list()
{
	return NULL;//Retorna ponteiro para nulo
}
//Lista vazia
int is_empty_linked_list(node *head)
{
	return (head == NULL);
}
//Inserindo na lista
node* add(node *head, char character, int frequency_of_character)
{
	node *new_node = (node*) malloc(sizeof(node));//Aloca um new_node
	new_node->character = character;//Coloca item no campo item
	new_node->frequency_of_character = frequency_of_character;
	new_node->next = head;//Coloca o proximo como cabe�a
	return new_node;//Retorna o ponteiro
}
//Imprimindo elementos da lista
void print_linked_list(node *head)
{
	while (head != NULL) {
		printf("%c %d\n", head->character, head->frequency_of_character);//Imprime um item do campo node
		head = head->next;//Cabe�a aponta para o mesmo lugar que head->next
	}
}

void merge(int *v, int beggin, int middle, int end) {
	int beggin01, beggin02, beggin_aux;
 	beggin01 = beggin;
 	beggin02 = middle+1;
 	beggin_aux = 0;
 	int v_aux[end-beggin+1];
  
  	while(beggin01<=middle && beggin02<=end){
  		if(v[beggin01] <= v[beggin02]){
  			v_aux[beggin_aux] = v[beggin01];
            beggin01++;
        }else{
            v_aux[beggin_aux] = v[beggin02];
            beggin02++;
        }
        beggin_aux++;
    }
 
    while(beggin01<=middle){  //Caso ainda haja elementos na primeira metade
        v_aux[beggin_aux] = v[beggin01];
        beggin_aux++;beggin01++;
    }
 
    while(beggin02<=end){   //Caso ainda haja elementos na segunda metade
        v_aux[beggin_aux] = v[beggin02];
        beggin_aux++;beggin02++;
    }
 
    for(beggin_aux=beggin;beggin_aux<=end;beggin_aux++){    //Move os elementos de volta para o vetor original
        v[beggin_aux] = v_aux[beggin_aux-beggin];
    }
}
 
void merge_sort(int vetor[], int beggin, int end){
    if (beggin < end) {
        
        int middle = (beggin+end)/2;
 
        merge_sort(vetor, beggin, middle);
        merge_sort(vetor, middle+1, end);
        merge(vetor, beggin, middle, end);
    }
 }

int main()
{
	char my_string[1000];
	//n_char para guardar a frequencia de cada caracter
	//frequency_char para guardar a frequencia de cada um dos 256 possiveis caracteres
	int index, frequency_char[256] = {0};
	int size_my_frequency = 0;//Vai guardar o tamanho da frequencia
	//printf("Digite um texto\n");
	scanf("%1000[^\n]", my_string);//Lendo a string at� digitar enter

	for(index = 0; my_string[index] != '\0'; ++index)
	{
		//Guarda a frequencia do caracter da posi��o index
		//Exemplo: caracter c apareceu pela terceira vez - ent�o vai guardar 3 na posi��o c de frequency_char
		frequency_char[ my_string[index] ]++;
	}
	for(index = 0; index < 256; ++index)
	{
		if(frequency_char[index] > 0) size_my_frequency++;//Soma 1 ao tamanho da sequencia
	}

	merge_sort(frequency_char, 0, size_my_frequency);//Ordena frequency_char em ordem crescente

	int i;
	node *my_ll = create_linked_list();//Cria uma lista encadeada para guardar o caracter e sua respectiva frequencia

	for(index = 0; index < 256; ++index)
	{
		//S� imprime se a frequencia do caracter i for diferente de 0
		if(frequency_char[index] > 0)
		{
			//printf("O caracter %c tem a frequencia %d\n", index, frequency_char[index]);
			//char index_char = index;
			my_ll = add(my_ll, (char)index, frequency_char[index]);
		}
	}

	print_linked_list(my_ll);//Imprime a lista encadeada
	free(my_ll);

	return 0;
}