#include <iostream>
#include <stdio.h>

// Link da aula 16: https://www.youtube.com/watch?v=MZ50NMD16ek&spfreload=10

using namespace	std;	// compilador ira procurar dentro da std;

int main(void){

	unsigned int cnt = 0;
	char a[8];
	
	a[0] = 'a';
	a[1] = 'm';
	a[2] = 'e';
	a[3] = 'n';
	a[4] = 'd';
	a[5] = 'o';
	a[6] = 'i';
	a[7] = 'm';
	
	for(cnt=0;cnt<=7;cnt++)
		cout << a[cnt];
	
	cout << endl <<"Rotina finalizada." << endl;
	return 0;
}
