//
//  main.cpp
//  test menu costoCrociere
//
//  Created by Apple on 03/10/17.
//  Copyright © 2017 costoCrociera. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>

using namespace std;

int giorni = 0, anni = 0, classe = 3;
string stagione = "" , compagnia = "", schettino = "", reset;
float prezzo;
char opzione, opzione2;

void prezzoGiorni();
void prezzoStagione();
void prezzoEta();
void prezzoClasse();
void prezzoCompagnia();
void prezzoSchettino();


int main() {
    
    do{
        system("cls");
        
        cin.clear(opzione);
        
        cout<<endl<<"calcolo costo di un biglietto per la crociera in base ai giorni, alla stagione, agli anni, alla classe e alla compagnia scelta"<<endl<<endl;
        
        cout<<"****************************"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (g/G) Giorni       *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (s/S) Stagione     *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (a/A) Anni         *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (c/C) Classe       *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (o/O) Compagnia    *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (p/P) Prezzo       *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (r/R) Reset        *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"*       (e/E) Esci         *"<<endl;
        cout<<"*                          *"<<endl;
        cout<<"****************************"<<endl<<endl;
        
        cout<<"Giorni: "<<giorni<<endl<<"Stagione: "<<stagione<<endl<<"Anni: "<<anni<<endl<<"Classe: "<<classe<<endl<<"Compagnia: "<<compagnia<<endl<<endl;
        
        cout<<"Scegli opzione: ";
    
        cin.ignore(opzione); cin>>opzione;
        
        
        switch (opzione) {
            case 'g':
            case 'G':
                do{
                    system("cls");
                    cout<<"Inserisci i giorni di vacanza: ";
                    cin>>giorni;
                    if(giorni <0){
                        cout<<"errore: I giorni non possono essere sotto 0";
                        getch();
                    }
                } while(giorni <= 0);
                break;
            
            
            case 's':
            case 'S':
                do{
                    system("cls)");
                    cout<<"Inserisci la Stagione di partenza: "<<endl;
                    cout<<"(primavera/estate/autunno/inverno)";
                    cin>>stagione;
                    if (stagione != "inverno" or stagione != "estate" or stagione != "primavera" or stagione != "autunno" ) {
                        cout<<"Errore: inserire un dato valido";
                        getch();
                    }
                }while(stagione != "inverno" or stagione != "estate" or stagione != "primavera" or stagione != "autunno");
                break;
            
              
            case 'a':
            case 'A':
                do{
                    system("cls");
                    cout<<"Inserisci gli anni del passeggero: ";
                    cin>>anni;
                    if(anni <0){
                        cout<<"errore: Il passeggero non puo' avere sotto 0 anni";
                        getch();
                    }
                } while(anni <= 0);
                break;
                
            case 'c':
            case 'C':
                do{
                    system("cls");
                    cout<<"Inserisci la classe desiderata: "<<endl;
                    cout<<"(1/2/3)";
                    cin>>classe;
                    if(classe < 0 or classe > 4){
                        cout<<"errore: Inserire un dato valido";
                        getch();
                    }
                } while(classe < 0 or classe > 4);
                break;
                
            case 'o':
            case 'O':
                do{
                    system("cls)");
                    cout<<"Inserisci compagnia della Crociera: "<<endl;
                    cout<<"(meridiana/costacrociera)";
                    cin>>compagnia;
                    if (compagnia != "meridiana" or compagnia != "costacrociera") {
                        cout<<"Errore: inserire un dato valido";
                        getch();
                    }
                }while(compagnia != "meridiana" or compagnia != "costacrociera");
                break;
                
            case 'p':
            case 'P':
                prezzoGiorni();
                prezzoStagione();
                prezzoEta();
                prezzoClasse();
                prezzoCompagnia();
                
                cout<<"Il prezzo totale del biglietto e': €"<<prezzo;
                getch();
                break;
            
            case 'r':
            case 'R':
                cout<<"sicuro di voler resettare tutti i dati?"<<endl;
                cout<<"(si/no): ";
                cin>>reset;
                if(reset == "si"){
                    giorni = 0;
                    stagione = "";
                    anni = 0;
                    classe = 3;
                    compagnia = "";
                    
                }else(){
                    getch()
                    break;
                }
                break;
            
            default:
                break;
        }
        
        opzione2 = (opzione);
        if(!(opzione2 == 'g' or opzione =='s' or opzione =='a' or opzione =='c' or opzione =='o' or opzione =='p' or opzione =='e'))
        {
            cout<<endl<<endl<<"Premere un tasto per tornare al menu";
            getch();
        }
        
        
    }while (!(opzione2 == 'e'));
    
    
    
    
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









