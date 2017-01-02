#include <iostream>
#include <stdio.h>

// Link da aula 16: https://www.youtube.com/watch?v=MZ50NMD16ek&spfreload=10

using namespace	std;	// compilador ira procurar dentro da std;
float sum(float firstValueToSum, float secondValueToSum);

int main(int argc, char *argv[]){ 

	unsigned int var_1 = 0;
	unsigned int var_2 = 0;
	
	
	cout << endl << "Digite um valor:" << endl;
	cin >> var_1;
	cout << endl << "Digite outro valor:" << endl;
	cin >> var_2;
	
	cout << "Soma dos valores = " << sum(var_1,var_2);
	
	return 0;
}

float sum(float firstValueToSum, float secondValueToSum){
	
	float resultSum = 0;
	
	resultSum = firstValueToSum + secondValueToSum;
	
	return resultSum;
}
