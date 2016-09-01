//============================================================================
// Name        : Ushtrimi_2.cpp
// Author      : BLEDAR HAXHIA
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Shkruaj nje program ne c++ qe I kerkon perdoruesit te fuse 10
// numra te plote ne tabele dhe nje numer te plote a .Programi duhet te
// kerkoje nese a eshte ne tabelen e 10 numrave te plote.
// Nese vlera e variablit ndodhet ne tabele  te shfaqet ne ekran
// "Vlera a ndodhet ne tabele" perndryshe "Vlera a nuk ndodhet ne tabele"
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//inicializim i variablave dhe tabeles
	int tabela[10];
	int a;
	bool a_ndodhent_ne_table = false;

	cout << "Jepni 10 numra te plote" << endl;

	//cikel for per te marre numrat e tableles
	for (int i=0; i<10; ++i ){

		cin>>tabela[i];
	}

	//leximi i numrit a
	cout <<endl <<"Jepni nje numer te plote per kerkim" <<endl;
	cin>>a;

	//kontrollohet tablea nese permbane numrin a edh enese po atehere variabli "a_ndodhent_ne_table" kthen vleren true perndyshe mban vleren false
	for(int i=0; i<10;i++){

		if ( a==tabela[i] ) {
			a_ndodhent_ne_table=true;
			break;
		}
	}

//printon ne ekran mesazhin perkates ne varesi te variablit boolean
	if(a_ndodhent_ne_table){
		cout <<endl <<"Vlera a="<<a<<" ndodhet ne tabele !" <<endl;
	}else{
		cout <<endl <<"Vlera a="<<a<<" nuk ndodhet ne tabele !" <<endl;
	}


	return 0;
}

// !! SHENIM !!
// TE GJITHA SHENIMET ME ME DY SLASHE PERPARA JANE KOMENTE EDHE
// SHERBEJNE VETEM PER SQARIMIN E KODIT. ATO SKANE NDIKIM NE ECURINE
// E PROGRAMIT. MUND TE HIQEN PA DEMTUAR KODIN
// HAPPY CODING :) -_- 