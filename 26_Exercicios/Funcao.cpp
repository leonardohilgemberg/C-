#include <iostream>
#include <stdio.h>

// Link da aula 25: https://www.youtube.com/watch?v=KuipEEelnpU

using namespace	std;	// compilador ira procurar dentro da std;
void contador(unsigned int getNumMax, unsigned int cont = 0); // quando declarada aqui, denomina-se prototipagem de func.

int main(int argc, char *argv[]){ 

	unsigned int getUser = 0;
	
	cout << "Digite um valor:" << endl;
	cin >> getUser;

	contador(getUser);
	
	return 0;
}

void contador(unsigned int getNumMax, unsigned int cont){
	
	cout << cont << ", ";
	
	if(getNumMax > cont)
	{
		contador(getNumMax,++cont);
	}
}

