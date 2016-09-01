//============================================================================
// Name        : Ushtrimi1.cpp
// Author      : Bledar Haxhia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Te ndertohet nje program ne c++ qe kriion nje klase DATE
// dhe ka si antare private data, muaji, viti.Klasa duhet te
// jete nje konstruktor qe I jep vlere 3 antareve data, muaji,
// viti dhe funksoinet getData () getMuaji () getViti() dhe shfaqDate.
// Funksionet e para duhet te kthejne perkatesisht vlerat e antareve data,
// muaji, viti.Ndersa funksioni I fundit do te paraqese ne ekran daten, muajin,
// vitin te ndare me simbolin "/"

//============================================================================

#include <iostream>
using namespace std;

class Date{

	private:
		int data ,muaji, viti;

	//konstruktori i klases qe ben inicializimin e variablave private
	public: Date(void){
		data=10;
		muaji=8;
		viti=1992;
	}

	//funksioni qe kthen vleren e dates
	public: int getData(){
		return data;
	}

	//funksioni qe kthen vleren e muajit
	public: int getMuaji(){
		return muaji;
	}

	// funksioni qe kthen vleren vleren e variablit viti
	public: int getViti(){
		return viti;
	}

	//funksioni qe shfaq ne ekran vleren e plote te dates ne formatin e kerkuar
	public: void shfaqDate(){
		cout<<"Data: "<<data<<"/"<<muaji<<"/"<<viti;
	}


};

int main() {
	//krijimi i objektit date
	Date date;

	//thirrja e funksionit te objektit date
	date.shfaqDate();
	return 0;
}































