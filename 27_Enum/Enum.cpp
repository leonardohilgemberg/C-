#include <iostream>
#include <stdio.h>

// Link da aula 25: https://www.youtube.com/watch?v=KuipEEelnpU

using namespace	std;	// compilador ira procurar dentro da std;

int main(int argc, char *argv[]){ 

	enum semana{
		
		segunda = 0,
		terca 	= 1,
		quarta	= 2,
		quinta 	= 3,
		sexta 	= 4,
		sabado	= 5,
		domingo = 6
	};
	semana diaSemana;
	
	diaSemana = sexta;
	
	cout << diaSemana << endl;

	return 0;
}
