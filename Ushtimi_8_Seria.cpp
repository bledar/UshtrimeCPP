//============================================================================
// Name        : Ushtrimi_7.cpp
// Author      : Bledar Haxhia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Te ndertohet nje funksion qe gjene vleren e funksionit
// y= X* ∑(i/3-4) (i=2 deri ne n+1)
// vlera x jepet nga perdorusi
//============================================================================

#include <iostream>
using namespace std;

int n =5;

float llogarit_serine(int x){

	float y=0;

	for(int i=2; i<=(n+1);i++){
		y=y+((i)/3-4);
	}

	y=y*x;

	return y;
}

int main() {
	int x=0;
	cout << "Jepni vleren X:" << endl;
	cin>>x;

	cout<<"Shuma: "<<llogarit_serine(x);

	return 0;
}

// !! SHENIM !!
// TE GJITHA SHENIMET  ME DY SLASHE PERPARA JANE KOMENTE EDHE
// SHERBEJNE VETEM PER SQARIMIN E KODIT. ATO SKANE NDIKIM NE ECURINE
// E PROGRAMIT. MUND TE HIQEN PA DEMTUAR KODIN
// HAPPY CODING :) -_-