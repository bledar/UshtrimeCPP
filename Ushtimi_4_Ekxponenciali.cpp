//============================================================================
// Name        : Ushtrimi_4.cpp
// Author      : Bledar Haxhia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Shkruaj nje funksion fuqi (baze , ,exp) qe kur thirret te ktheje vleren e bazes.
// Psh: fuqi (3, 4)=3*3*3*3
// Ta keni parasysh qe x duhet  te jete nje numer pozitiv me I madh se 0 dhe baza nje numer I plote
//============================================================================

#include <iostream>
using namespace std;

//funksioni qe kryen llogaritjen e fuqise

int fuqi(int a, int b){

	int e=a;

	for(int i=1; i<b; i++){
		e*=a;
	}
	return e;
}

//fuksioni main per ekzekutimin e programit
int main() {

	cout << fuqi(3,4) << endl;
	return 0;
}
