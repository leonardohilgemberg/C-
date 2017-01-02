#include <iostream>
#include <stdio.h>

// Link da aula 5: https://www.youtube.com/watch?v=o44fNZn4zNw

using namespace	std;	// compilador ira procurar dentro da std;
#define mediaLocal 60

int main(void){

	int valor;
	
	
	
	cout << "Digite um valor: ";
	cin >> valor;
	cout << endl;
	
	switch(valor)
	{
		case 1:
			cout << "1 - voce digitou: "<< valor << endl;
		break;
		case 2:
			cout << "2 - voce digitou: "<< valor << endl;
		break;
		case 3:
			cout << "3 - voce digitou: "<< valor << endl;
		break;
		default:
			cout << "invalid! - voce digitou: "<< valor << endl;
		break;
	}
		
	return 0;
}
