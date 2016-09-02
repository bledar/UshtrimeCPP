//============================================================================
// Name        : Ushtrimi_5.cpp
// Author      : Bledar Haxhia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Shkruani nje funksion shuma_a (int num) I cili gjen shumen e
// te gjithe  numrave te plote  me te vegjel se numri qe merr parameter
// Psh: shume_a (4)=4+3+2+1
//============================================================================

#include <iostream>
using namespace std;


//fuksioni qe llogarit shumen
int shuma_a(int a){
	int shuma=0;

	for (int i=a;i>0; i--){

		shuma +=i;
	}
	return shuma;
}

// funksioni kryesore qe ekzekuton programin
int main() {
	cout << shuma_a(5) << endl;
	return 0;
}

// !! SHENIM !!
// TE GJITHA SHENIMET  ME DY SLASHE PERPARA JANE KOMENTE EDHE
// SHERBEJNE VETEM PER SQARIMIN E KODIT. ATO SKANE NDIKIM NE ECURINE
// E PROGRAMIT. MUND TE HIQEN PA DEMTUAR KODIN
// HAPPY CODING :) -_-
