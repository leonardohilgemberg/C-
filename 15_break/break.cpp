#include <iostream>
#include <stdio.h>

// Link da aula 14: https://www.youtube.com/watch?v=x8yF9nf5KrA

using namespace	std;	// compilador ira procurar dentro da std;
#define mediaLocal 60

int main(void){

	int valor = 0;
	
	while(valor <= 1000)
	{
		cout << valor++ << ", ";
		if(valor > 500)
			break;
	}
	return 0;
}
