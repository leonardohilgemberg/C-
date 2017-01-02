#include <iostream>
#include <stdio.h>

// Link da aula 16: https://www.youtube.com/watch?v=MZ50NMD16ek&spfreload=10

using namespace	std;	// compilador ira procurar dentro da std;

int main(void){

	int valor = 0;
	
	// executa o laco pelo menos uma vez
	do
	{
		cout << valor++ << ", ";
	}while(valor <= 20);
	
	cout << endl <<"Rotina finalizada." << endl;
	return 0;
}
