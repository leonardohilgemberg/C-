#include <iostream>
#include <stdio.h>

// Link da aula 25: https://www.youtube.com/watch?v=KuipEEelnpU

using namespace	std;	// compilador ira procurar dentro da std;
void contador(unsigned int getNumMax, unsigned int cont = 0); // quando declarada aqui, denomina-se prototipagem de func.

int main(int argc, char *argv[]){ 

	contador(20);
	
	return 0;
}

void contador(unsigned int getNumMax, unsigned int cont){
	
	cout << cont << ", ";
	
	if(getNumMax > cont)
	{
		contador(getNumMax,++cont);
	}
}

