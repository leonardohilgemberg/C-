#include <iostream>
#include <stdio.h>

// Link da aula 16: https://www.youtube.com/watch?v=MZ50NMD16ek&spfreload=10

using namespace	std;	// compilador ira procurar dentro da std;

// o primeiro parametro armazena a quantidade de argumentos.
// o segundo parametro armazena os argumentos recebidos.
int main(int argc, char *argv[]){ 

	unsigned int cnt;
	
	cout << endl << "quantidade de parametros: " << argc;
	
	for(cnt=0;cnt<argc;cnt++)
		cout << endl << "Parametro" << argc << ": \" " << argv[cnt] << "\"" << endl;
	
	return 0;
}
