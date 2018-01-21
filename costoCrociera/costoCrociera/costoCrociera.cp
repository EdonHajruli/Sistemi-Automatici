//
//  main.cpp
//  costoCrociera
//
//  Created by Apple on 03/10/17.
//  Copyright © 2017 costoCrociera. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int giorni, anni, classe;
string stagione, compagnia, schettino;
float prezzo;

void prezzoGiorni();
void prezzoStagione();
void prezzoEta();
void prezzoClasse();
void prezzoCompagnia();
void prezzoSchettino();

int main() {
    
    cout<<"Giorni del viaggio: ";
    cin>>giorni;
    
    cout<<"Stagione: ";
    cin>>stagione;
    
    cout<<"Anni passeggero: ";
    cin>>anni;
    
    cout<<"Classe: ";
    cin>>classe;

    cout<<"Compagnia(meridiana/costacrociere): ";
    cin>>compagnia;
    
    cout<<"Schettino(si/no): ";
    cin>>schettino;
    

    
    
    prezzoGiorni();
    prezzoStagione();
    prezzoEta();
    prezzoClasse();
    prezzoCompagnia();
    prezzoSchettino();
    
    cout<<"Il prezzo totale del biglietto e': €"<<prezzo<<endl;
    
    return 0;
}


void prezzoGiorni(){
    
    if(giorni<10){
        prezzo = giorni * 100;
    }
    
    if(giorni>=10 and giorni<20){
        prezzo = giorni * 80;
    }
    
    if(giorni>=20 and giorni<30){
        prezzo = giorni * 50;
    }
    
    if(giorni>=30){
        prezzo = giorni * 40;
    }
}


void prezzoStagione(){
    
    if(stagione == "inverno"){
        prezzo = prezzo - (prezzo*20/100);}
    if(stagione == "estate"){
        prezzo = prezzo + (prezzo*30/100);}
}


void prezzoEta(){
    
    if(anni<=10){
        prezzo = prezzo - (prezzo*80/100);
    }
    
    if(anni>=75){
        prezzo = prezzo - (prezzo*80/100);
    }
    
}

void prezzoClasse(){
    if(classe == 1){
        prezzo = 2* prezzo;
    }
    if(classe == 2){
        prezzo = 1.5* prezzo;
    }
}

void prezzoCompagnia(){
    if(compagnia == "meridiana"){
        prezzo = prezzo + (prezzo*10/100);
    }
    
    if(compagnia == "costacrociere"){
        prezzo = prezzo - (prezzo*10/100);
    }
}

void prezzoSchettino(){
    
    if(schettino == "si"){
        prezzo = prezzo - prezzo*90/100;
    }
}















