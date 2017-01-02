#include <iostream>
#include <stack>
#include <stdio.h>

// Link da aula 27: https://www.youtube.com/watch?v=mGLtyCOJe4A
// pilha / stack

// .push() 	-> insere elementos em uma pilha.
// .pop() 	-> Retira elementos da pilha, elemento do topo.
using namespace	std;	// compilador ira procurar dentro da std;

int main(int argc, char *argv[]){ 

	stack <string> cartas;
	
	cartas.push("Rei de copas");		// adicionado por 1
	cartas.push("Rei de espadas.");		// adicionado por 2
	cartas.push("Rei de ouro.");		// adicionado por 3
	cartas.push("Rei de Paus");			// adicionado por 4 - ultimo elemento, primeiro a sair.
	
	cout << "tamanho atual da pilha: " << cartas.size() << endl;
	// cartas.pop(); // retira elemento da pilha.
	//cout << "tamanho da pilha: " << cartas.size() << endl;
	cout <<  "Carta do topo: " << cartas.top() << endl;
	cartas.pop();	// retira elemento da pilha.
	cout << "tamanho atual da pilha: " << cartas.size() << endl;
	cout << "Nova carta do topo: " << cartas.top() << endl;
	
	return 0;
}
