//============================================================================
// Name        : Ushtrimi_6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Tendertohet nje program ne c++ qe ruan ne nje tabele 5 vlera
// qe fut perdoruesi  nga tastiera dhe te shfaqeb ne ekran
// elementat e tabeles qe ndodhen ne pozicionet tek duke
// perdorur nje pointer qe shenjon tabela

//============================================================================

#include <iostream>
using namespace std;

int main() {

	int tab[5];

	cout << "Jepni 5 numra te plote" << endl;

	//cikli qe lexon te dhenat nga perdorusi
	for(int i=0; i<5; i++){
		cin>>tab[i];
	}

	// cikli qe ben afishimet ne ekran
	// nr i rritet me nga dy cdo hap qe te jete gjithmone nr tek
	// kujdes numrimi i pozicioneve fillon nga 0 (0,1,2,3...)

	for(int i=1; i<5; i=i+2){
			cout<<tab[i]<<", ";
		}

	return 0;
}
