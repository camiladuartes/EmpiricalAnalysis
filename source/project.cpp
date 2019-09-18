#include <iostream>
#include <cstdlib>
#include <tgmath.h>
#include "../include/project.h"

using std::cin;
using std::cout;
using std::endl;

int *fibonacci_calculator(int index){
	int fib1 = 0; // Apenas atribui o primeiro elemento da sequência de fibonacci
	int fib2 = 1; // Apenas atribui o segundo elemento da sequência de fibonacci
	int aux = 0; // Auxiliar para que haja a troca(nas variáveis fic1,fib2) dos 2 últimos elementos da sequência do loop
	int elemFib = 1; // Inicialização da variável com o terceiro elemento da sequência
	int indicesParaPartir[2] = {}; // Vetor que receberá fib1 no primeiro índice e fib2 no segundo, que serão os dois tamanhos das partições do vetor
	while(elemFib < index){ // Enquanto elemFib(fibN) não for maior ou igual ao index(valor desejado) entra/continua no while
		elemFib = fib1 + fib2; // Próximo elemento da sequência
		indicesParaPartir[0] = fib1;
		indicesParaPartir[1] = fib2;
		aux = fib2; // Troca para os atuais fib1 e fib2 em que a soma da o fibN(elemFib)
		fib2 = elemFib; // Troca para os atuais fib1 e fib2 em que a soma da o fibN(elemFib)
		fib1 = aux; // Troca para os atuais fib1 e fib2 em que a soma da o fibN(elemFib)
	}
	int *toReturn = indicesParaPartir; // Ponteiro para retornar vetor com fib1 e fib2(tamanhos das partições)
	return toReturn;
}

int* binary_iterative(int *first, int *last, int value){
	int add_index;
	while(first <= last){
		add_index = (last - first )/2;  // Calcula o índice para posicionar o first no meio do vetor
		if(*(first+add_index) == value){ // Checa para o elemento do meio do vetor
			return (first + add_index);
			break;
		}
		else{
			if(*(first+add_index) > value){
				last = (first+(add_index-1)); // Move o last para o elemento anterior ao meio do vetor, caso ele seja maior que o alvo
			}
			else{
				first += (add_index+1); // Move o first para o elemento posterior ao meio do vetor, caso ele seja menor que o alvo
			}
		}

	}
	return NULL;
}

int* binary_recursive(int *first, int *last, int value ){
	int add_index;
	add_index = (last - first )/2;  // Calcula o índice para posicionar o first no meio do vetor
	if(first <= last){
		if(*(first+add_index) == value){  // Checa para o elemento do meio do vetor
			return (first + add_index);
		}
		else{
			if(*(first+add_index) > value){
				last = (first+(add_index-1));  // Move o last para o elemento anterior ao meio do vetor, caso ele seja maior que o alvo
				 binary_recursive(first, last, value);  //  Chama a função com o last ajustado
				}
				else{
				first += (add_index+1);  // Move o first para o elemento posteior ao meio do vetor, caso ele seja menor que o alvo
				binary_recursive(first, last, value);  //  Chama a função com o first ajustado
			}
		}

	}
	return NULL;
}

int* ternary_iterative(int *first, int *last, int value){  // OBS ** elemento 1/3 é *(first + add_index) e o elemento 2/3 é *(first + (2*(add_index))
	int add_index;
	while(first <= last){
		add_index = (last - first )/3;
		if(*(first+add_index+add_index) == value){ // Checa o elemento 2/3 do vetor
			return (first + add_index + add_index);
		}
		else{
			if(*(first + add_index + add_index) < value){
				first += (add_index+ add_index + 1);  // Move o first para o índice posteior ao do elemento 2/3 do vetor, caso ele seja menor que o alvo
			}
			else{
				if(*(first + add_index) == value){  // Checa o elemento 1/3 do vetor
					return (first + add_index);
				}
				else{
					if(*(first + add_index) < value){
						first += (add_index + 1);  // Move o first para o índice posteior ao do elemento 1/3 do vetor, caso ele seja menor que o alvo
						last = (first+(add_index + add_index -1));  // Move o last para o índice anterior ao do elemento 2/3 do vetor
					}
					else{
						last = (first+(add_index-1)); // Move o last para o índice anterior ao do elemento 1/3 do vetor, caso ele seja maior que o alvo
					}
				}
			}
		}
	}
	return NULL;
}

int* ternary_recursive(int *first, int *last, int value){  // OBS ** elemento 1/3 é *(first + add_index) e o elemento 2/3 é *(first + (2*(add_index))
	int add_index;
	add_index = (last - first )/3;
	if(first <= last){
		if(*(first+add_index+add_index) == value){  // Checa o elemento 2/3 do vetor
			return (first + add_index + add_index);
		}
		else{
			if(*(first + add_index + add_index) < value){
				first += (add_index+ add_index + 1);  // Move o first para o índice posteior ao do elemento 2/3 do vetor, caso ele seja menor que o alvo
				ternary_recursive(first, last, value);  // Chama a função com first ajustado
			}
			else{
				if(*(first + add_index) == value){  // Checa o elemento 1/3 do vetor
					return (first + add_index);
				}
				else{
					if(*(first + add_index) < value){
						first += (add_index + 1);  // Move o first para o índice posteior ao do elemento 1/3 do vetor, caso ele seja menor que o alvo
						last = (first+(add_index + add_index -1));  // Move o last para o índice anterior ao do elemento 2/3 do vetor
						ternary_recursive(first, last, value);  // Chama a função com first e o last ajustados
					}
					else{
						last = (first+(add_index-1));  // Move o last para o índice anterior ao do elemento 1/3 do vetor, caso ele seja maior que o alvo
						ternary_recursive(first, last, value); // Chama a função com last ajustado
					}
				}
			}
		}
	}
	return NULL;
}

int* linear_iterative(int *first, int *last, int value){
	while(first != last){
		if(*first == value){  //  Checa se o elemento atual é igual ao alvo
			return first;
		}
		first++;  // Move o first para o próximo elemento do vetor
	}
	return NULL;
}

int* list_calculator(int lenght){
	int *first = new int[lenght];  // Aloca um vetor de tamanho desejado para o ponteiro first
	int min = 0;
	for(int i=0; i<lenght; i++){  // Laço de geração do vetor. OBS **  vetor = 1, 2, 3, 4...lenght
		first[i] = i+1;
	}
	return first;
}

int* jump_search(int *first, int *last, int value){
	int jump;
	jump = floor(sqrt(last-first));  // Calcula o tamanho do pulo
	if(*(first) == value){
		return first;
	}
	else{
		while(*(first) <= value && first <= last){  // Laço para checagem de elemento maior que o alvo no vetor.
			first += jump;
		}
		int* aux = first - jump;
		while(aux <= (first)){  // Laço de varredura linear do vetor
			if(*(aux) == value){
				return  (aux);
				break;
			}
			else{
				aux++;
			}
		}
	}
	return NULL;

}

int* fibonacci_search(int *first, int *last, int value){
	int *clone_ini_index = first;
	int add_index1 = 0;
	int add_index2 = 0;
	int *receberValores; // Ponteiro para receber os valores de fib1 e fib2(tamanhos das partições) da função "fibonacci_calculator"
	while(first != last){ // Enquanto os ponteiros não se encontrarem
		receberValores = fibonacci_calculator(last-first); // Recebe tamanho das duas partições da função
		add_index1 = receberValores[0]; // Recebe fib1(primeiro tamanho de partição) da função "fibonacci_calculator"
		add_index2 = receberValores[1]; // Recebe fib2(segundo tamanho de partição) da função "fibonacci_calculator"
		if(*(first+add_index1) == value){
			return (first+add_index1); // Se achar o valor retorna-o para sair da função
		}
		else if(*(first+add_index2) == value){
			return (first+add_index2); // Se achar o valor retorna-o para sair da função
		}
		else{
			if(*(first+add_index1) > value){
				last = first+add_index1; // Move o last para o índice da partição fib1 do vetor
			}
			else if(*(first+add_index1) < value){
				first = first+(add_index1+1); // Move o first para o índice posterior ao da partição fib1 do vetor, caso ele seja menor que o alvo
			}
			else if(*(first+add_index2) > value){
				last = first+add_index2; // Move o last para o índice da partição fib2 do vetor
			}
			else if(*(first+add_index2) < value){
				first = first+(add_index2+1); // Move o first para o índice posterior ao da partição fib2 do vetor, caso ele seja menor que o alvo
			}
		}

	}
	return NULL;
}
