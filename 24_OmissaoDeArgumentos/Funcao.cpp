#include <iostream>
#include <stdio.h>

// Link da aula 23: //https://www.youtube.com/watch?v=tPsc2WckHc4

using namespace	std;	// compilador ira procurar dentro da std;
void funcao(string txt = "vazio"); // quando declarada aqui, denomina-se prototipagem de func.

int main(int argc, char *argv[]){ 

	funcao();
	
	return 0;
}

void funcao(string txt){
	
	cout << txt << endl;
}

