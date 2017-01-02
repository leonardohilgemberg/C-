#include <iostream>
#include <stdio.h>

// Link da aula 5: https://www.youtube.com/watch?v=o44fNZn4zNw

using namespace	std;	// compilador ira procurar dentro da std;

int main(void){

	int var = 12;
	int secondVar = 15;
	
	cout << "Primeira Forma" << endl;
	cout << "Inverte valor da var:" << var << endl;
	var = var * (-1);
	cout << "New var:" << var << endl;
	
	cout << "Segunda Forma" << endl;
	cout << secondVar << endl;
	secondVar = -secondVar;
	cout << secondVar << endl;
	
	return 0;
}
