#include <iostream>
#include <stdio.h>

// Link da aula 14: https://www.youtube.com/watch?v=x8yF9nf5KrA

using namespace	std;	// compilador ira procurar dentro da std;
#define mediaLocal 60

int main(void){

	int valor = 0;
	
	while(valor != 4)
	{
			
		cout << "Digite um valor: 1, 2, 3 ou [4 para sair]";
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
				cout << "invalido! - voce digitou: "<< valor << endl;
			break;
		}
	}
	return 0;
}
