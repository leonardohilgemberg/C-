#include <iostream>
#include <stdio.h>

// Link da aula 5: https://www.youtube.com/watch?v=o44fNZn4zNw

using namespace	std;	// compilador ira procurar dentro da std;

int main(void){
	
	unsigned int preIncremento 	= 0;
	unsigned int posIncremento 	= 0;
	unsigned int cntFor 		= 0;
	
	cout << endl << "Para PRE incremento:" << endl;
	for(cntFor=0;cntFor<=10;cntFor++)
		cout << ++preIncremento << ", ";
	
	cout << endl << endl;
	
	cout << endl << "Para POS incremento:" << endl;
	for(cntFor=0;cntFor<=10;cntFor++)
		cout << posIncremento++ << ", ";
	
	return 0;
}
