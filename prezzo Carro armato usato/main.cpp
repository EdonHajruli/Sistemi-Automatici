#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int anni, fori, potenza, cannone, mitra;
float prezzo, prezzoS, prezzoI; 
double percentuale;

void prezzoAnni();
void prezzoFori();
void prezzoPotenza();
void prezzoMitra();
void prezzoCannone();

int main() {
	
	
	cout<<"Prezzo del carro armato comprato nuovo: ";
	cin>>prezzoI;
	cout<<endl;
	
	cout<<"Inserisci gli anni passati da quando comprato: ";
	cin>>anni;
	cout<<endl;
	
	cout<<"inserisci numero di fori presenti: ";
	cin>>fori;
	cout<<endl;
	
	cout<<"Inserisci potenza del motore (in cavalli): ";
	cin>>potenza;
	cout<<endl;
	
	cout<<"Inserisci numero di mitragliatrici presenti: ";
	cin>>mitra;
	cout<<endl;
	
	cout<<"Inserisci il calibro del cannone (in cm): ";
	cin>>cannone;
	cout<<endl;
	
	prezzoAnni();
	prezzoFori();
	prezzoPotenza();
	prezzoMitra();
	prezzoCannone();
	
	prezzoS = prezzoI - prezzo;
	percentuale = 100 - (prezzo/prezzoI*100);
	
	cout<<"Prezzo Iniziale: "<<prezzoI<<" Euro"<<endl<<"Prezzo finale: "<<prezzo<<" Euro"<<endl<<"Sconto in percentuale totale: "<<percentuale<<"%"<<endl<<"Lo sconto del Carro Armato dal prezzo iniziale e': "<<prezzoS<<" Euro"<<endl;
	return 0;
}


void prezzoAnni(){
	
	if(anni<=2){
		prezzo = prezzoI - (prezzoI*30/100);
	}
	
	if(anni>2 and anni<=5){
		prezzo = prezzoI - (prezzoI*40/100);
	}
	
	if(anni>5){
		prezzo = prezzoI - (prezzoI*60/100);
	}
}

void prezzoFori(){
	if(fori>=1 and fori<5){
		prezzo = prezzo - (prezzo*25/100);
	}
	if(fori>5){
		prezzo = prezzo - (prezzo*60/100);
	}
}

void prezzoPotenza(){
	if(potenza>1000){
		prezzo = prezzo + (prezzo*10/100);
	}
}

void prezzoMitra(){
	if(mitra >=2){
		prezzo = prezzo + (prezzo*10/100);
	}
}

void prezzoCannone(){
	if(cannone>12){
		prezzo = prezzo + (prezzo*5/100);
	}
}























































