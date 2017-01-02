#include <iostream>
#include <stdio.h>

// Link da aula 4: https://www.youtube.com/watch?v=hur9N6pHEbU

using namespace std;	// compilador ira procurar dentro da std;

int main(void){
	
	int vidas 			= 7;
	char letra 			= 'B';
	double decimal_1	= 3.14;
	float decimal_2 	= 3.1415;
	bool vivo 			= true;
	string nome 		= "Bruno";
	
	std::cout << "Printa as variavel loco:" << endl;
	std::cout << vidas << endl;
	std::cout << letra << endl;
	std::cout << decimal_1 << endl;
	std::cout << decimal_2 << endl;
	std::cout << vivo << endl;
	std::cout << nome << endl;
	
	std::cout << "Digite um novo numero para a vida:" << endl;
	std::cin >> vidas;
	std::cout << "Digite uma nova letra:" << endl;
	std::cin >> letra;
	std::cout << "Digite um valor de dinheiro:" << endl;
	std::cin >> decimal_1;
	std::cout << "Digite o seu nome:" << endl;
	std::cin >> nome;
	
	std::cout << endl << vidas << endl << letra << endl << decimal_1 << endl << decimal_2 << endl << vivo << endl << nome << endl;
	return 0;
}
