#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main()
{ int i, N, trovato;
  string scelta, nome;
  cout<<"Dammi il numero di alunni della classe: "<<endl;
  cin>>N;
  
  string nomi[N];
  float votiit[N], votimat[N], votiel[N], medie[N];
  int anni[N];	
	
	for(i=0; i<N; i++)
	{ cout<<"Dammi  il nome del: "<< i+1 <<"alunno"<<endl;
	  cin>>nomi[i];
	  cout<<"Dammi  il suo voto di italiano"<<endl;
	  cin>>votiit[i];
	  cout<<"Dammi  il suo voto di matematica"<<endl;
	  cin>>votimat[i];
	  cout<<"Dammi  il suo voto di elettro"<<endl;
	  cin>>votiel[i];
	  cout<<"Dammi  l'eta' dell' alunno"<<endl;
	  cin>>anni[i];
	  
		}	
	for(i=0; i<N; i++)
		{medie [i] = (votiit[i] + votimat[i] + votiel[i])/3;
		}
	cout<<"TABELLLONE CLASSE"<<endl;
	cout<<"NOMI			VOTOIT			VOTOMAT			VOTOEL			MEDIE			ANNI		"<<endl;
	cout<<"																							"<<endl;
	cout<<"																							"<<endl;
	cout<<"																							"<<endl;
	for(i=0; i<N; i++)
	{cout<<nomi[i]<<"		"<<votiit[i]<<"		 "<<votimat[i]<<"		"<<votiel[i]<<"		  "<<medie[i]<<"		"<<anni[i]<<endl;}
	 cout<<"Vuoi la ricerca per nome?(SI/NO)"<< endl;
	 cin>>scelta;
	 if(scelta=="SI")
	 {cout<<"Dammi il nome da cercare"<<endl;
	  cin>>nome;
	  trovato=0;
	  cout<<"NOMI			VOTOIT			VOTOMAT			VOTOEL			MEDIE			ANNI		"<<endl;
	  
	  for(i=0; i<N; i++)
	  {if(nome==nomi[i])
	   {trovato=1;
	   cout<<nomi[i]<<"		"<<votiit[i]<<"		 "<<votimat[i]<<"		"<<votiel[i]<<"		  "<<medie[i]<<"		"<<anni[i]<<endl;
	  }
	 }
	 
	 if(trovato==0)
	   {cout<<"Il nome selezionato non e' stato trovato"<< endl;
	   }
	
	
	
	
	
	
	
}

return 0;

}
