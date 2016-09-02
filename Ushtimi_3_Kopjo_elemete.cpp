//============================================================================
// Name        : Ushtrimi_3.cpp
// Author      : BLEDAR HAXHIA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Shkruaj nje program qe merr 2  tabela  a dhe b secila nga 10
// elementa me numra te plote dhe nje tabele c me 20 numra te plote.
// Programi duhet te vendose te tabela c elementet e tabeles a duke
// ndjekur elementet e tabeles b.Me pas te shfaqet ne ekran tabela c
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//inicializohen tabelat me vlerat te ndryshme
	int tabA[10]={2,5,6,9,8,4,7,8,5,15};
	int tabB[10]={7,25,15,85,84,74,17,38,75,3};
	int tabC[20];

	//cikli ku kopjohen numran nga dy tabelat e pare ne tabelen perfundimtare C
	for(int i=0; i<20; i++){
		if(i<10){
			tabC[i]=tabA[i];
		}else{
			tabC[i]=tabB[i-10];
		}
	}

	//Afishimi i tabeles C
	cout<<"Elementet e tabeles C jane: "<<endl;
	for(int i=0;i<20;i++){
		cout<< tabC[i]<<",";
	}


	return 0;
}

// !! SHENIM !!
// TE GJITHA SHENIMET  ME DY SLASHE PERPARA JANE KOMENTE EDHE
// SHERBEJNE VETEM PER SQARIMIN E KODIT. ATO SKANE NDIKIM NE ECURINE
// E PROGRAMIT. MUND TE HIQEN PA DEMTUAR KODIN
// HAPPY CODING :) -_-
