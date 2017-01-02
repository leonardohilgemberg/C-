#include <iostream>
#include <stdio.h>

// Link da aula 5: https://www.youtube.com/watch?v=o44fNZn4zNw

using namespace	std;	// compilador ira procurar dentro da std;
#define mediaLocal 60

int main(void){

	unsigned int nota_1 = 0;
	unsigned int nota_2 = 0;
	unsigned int media 	= 0;
	string resultado;
	
	
	cout << "Digite a nota 1" << endl;
	cin >> nota_1;
	cout << "Digite a nota 2" << endl;
	cin >> nota_2;
	
	media = (nota_1 + nota_2)/2;
	
	if(media >= mediaLocal)
		cout << "Parabens Jacare, foi aprovado com a nota:" << media << endl;
	else 
		cout << "Parabens por ser burro! Jacare, foi reprovado com a nota:" << media << endl;
	
	cout << endl << endl;
	
	(media >= mediaLocal) ?  resultado = "Aprovado...\n" : resultado = "Reprovado...\n";
			
	cout << resultado << endl;
			
	return 0;
}
