#include <iostream>
#include <queue>
#include <stdio.h>

// Link da aula 29: https://www.youtube.com/watch?v=r4R9or_pn2E
// Fila / Queue
// .Front()	-> retorna a carta da frente da fila, so mostra.
// .push() 	-> insere elementos em uma pilha.
// .pop() 	-> Retira elementos da pilha, elemento do topo.
// .size()	-> quantidade de elementos na pilha.
// .top()	-> Retorna o valor do topo da pilha.
// .empty	-> Se a pilha estiver vazia, retorna true.

using namespace	std;	// compilador ira procurar dentro da std;

int main(int argc, char *argv[]){ 

	unsigned int cntZeraPilha = 0;
	
	list <string> cartas;
	
	if(cartas.empty())
		cout << "pilha vazia" << endl;
	else
		cout << "Pilha possui elementos." << endl << endl;
		
	cartas.push("Rei de copas");		// adicionado por 1
	cartas.push("Rei de espadas.");		// adicionado por 2
	cartas.push("Rei de ouro.");		// adicionado por 3
	cartas.push("Rei de Paus");			// adicionado por 4 - ultimo elemento, primeiro a sair.
	
	cout << "tamanho atual da pilha: " << cartas.size() << endl;
	// cartas.pop(); // retira elemento da pilha.
	//cout << "tamanho da pilha: " << cartas.size() << endl;
	cout <<  "Carta do topo: " << cartas.front() << endl;
	cartas.pop();	// retira elemento da pilha.
	cout << "tamanho atual da pilha: " << cartas.size() << endl;
	cout << "Nova carta do topo: " << cartas.front() << endl;
	
	if(cartas.size() == 0)
		cout << "pilha vazia" << endl << endl;
	else
		cout << endl << "Pilha possui elementos." << endl << endl;
	
	while(cartas.size() != 0)
		cartas.pop();	// retira elemento da pilha.
		
	if(cartas.empty())
		cout << endl << "pilha vazia" << endl;
	else
		cout << endl << "Pilha possui elementos." << endl << endl;
		
	return 0;
}
