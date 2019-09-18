#include <iostream>
#include <fstream>
#include <iterator>
#include <chrono>
#include "../include/project.h"

using std::cin;
using std::cout;
using std::endl;
using std::ofstream;


int main () {
	int *vetor_base;
	int target=0, lenght=0;
	long double tempos=0;
	ofstream dados; // Stream para guardar os dados
	dados.open("../data/linear_iterative.dat", ofstream::app);  // Arquivo para guardar os dados
	lenght = 32;
	for(int j=1; j<=25; j++){  // Laço para dobrar o tamanho da entrada de dados 25 vezes
		target = lenght+2;  // Define um alvo fora do vetor
		vetor_base =  list_calculator(lenght);  // Gera um vetor com ordenação crescente e elementos distintos
		for (int i=1; i<=100; i++) {  // Laço para testa 100 vezes cada entrada de dados
			std::chrono::steady_clock::time_point _start(std::chrono::steady_clock::now());  // Começa a contar o tempo
			linear_iterative(&vetor_base[0], (vetor_base+lenght), target);
			std::chrono::steady_clock::time_point _end(std::chrono::steady_clock::now());  // Contabiliza o tempo após a execução
			tempos += std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(_end - _start).count();  // incrementa os tempos
		}
		dados << lenght << " " << (tempos/100) << endl; // Grava os dados no arquivo para ser gerado o gráfico do algoritmo de busca
		lenght = lenght*2;

	}

	dados.close();

}
