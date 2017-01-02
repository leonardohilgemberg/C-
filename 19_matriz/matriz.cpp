#include <iostream>
#include <stdio.h>

// Link da aula 16: https://www.youtube.com/watch?v=MZ50NMD16ek&spfreload=10

using namespace	std;	// compilador ira procurar dentro da std;

int main(void){

	unsigned int cntLine = 0;
	unsigned int cntClumn = 0;
	const int qtdLine = 3;
	const int qtdColunm = 3;
	unsigned int matriz[qtdLine][qtdColunm];
	
	for(cntLine=1;cntLine<=qtdLine;cntLine++)
		for(cntClumn=1;cntClumn<=qtdColunm;cntClumn++)
		{
			cout << "Digite o valor da linha:[" << cntLine << "] Coluna[" << cntClumn << "] " << endl;
			cin >> matriz[cntLine][cntClumn];
		}
			
	for(cntLine=1;cntLine<=qtdLine;cntLine++)
	{
		for(cntClumn=1;cntClumn<=qtdColunm;cntClumn++)
		{
			cout << "[" << matriz[cntLine][cntClumn] << "]";
		}
		cout << endl;
	}
				
	cout << endl <<"Matriz finalizada." << endl;
	return 0;
}
