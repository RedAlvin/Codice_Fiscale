#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string nome;
	string cognome;
	string codice;
	int ncodice;
	int j;
	int lungn; //lunghezza nome
	int lungc; //Lunghezza cognome
	
	cout<<"                         Calcolo del codice fiscale BETA"<<endl<<endl<<endl;
	cout <<"Inserisci il tuo nome: ";
	getline (cin, nome);
	cout <<"Stringa letta = "<<nome<<endl;
    
	lungn = nome.length();
	cout <<"La stringa e' lunga: "<<lungn<<endl;
	
	for(int i=0; i<lungn; i++) //Correzione minuscole
		if(nome.at(i)>=97 && nome.at(i)<=122)
			nome.at(i)=nome.at(i)-32;
	
	for(int i=0; i<lungn; i++) //Verifica correzione
		cout<<nome.at(i);
	
    	cout<<endl<<endl;
		
	
    
    	cout <<"Inserisci il tuo cognome: ";
	getline (cin, cognome);
	cout <<"Stringa letta = "<<cognome<<endl;
    
	lungc = cognome.length();
	cout <<"La stringa e' lunga: "<<lungc<<endl;
	
	for(int i=0; i<lungc; i++) //Correzione minuscole
		if(cognome.at(i)>=97 && cognome.at(i)<=122)
			cognome.at(i)=cognome.at(i)-32;
	
	for(int i=0; i<lungc; i++) //Verifica correzione
		cout<<cognome.at(i);
		
	cout<<endl<<endl;
	
	cout <<"Inserisci il tuo sesso(M/F): ";
	getline (cin, sesso);
	cout <<"Stringa letta = "<<sesso<<endl;
	
	for(int i=0; i<3; i++) //Correzione minuscole
		if(sesso.at(i)>=97 && sesso.at(i)<=122)
			sesso.at(i)=sesso.at(i)-32;

    	cout<<sesso;
		
	cout<<endl<<endl;
	
    	for(int i=0; i<lungc && ncodice<3; i++){ //Assegnazione codice cognome
         if(cognome.at(i)!='A' && cognome.at(i)!='E' && cognome.at(i)!='I' && cognome.at(i)!='O' && cognome.at(i)!='U' && cognome.at(i)!=' '){
            codice=coice+cognome.at(i);
            cout<<codice.at(j);
            j++;
            ncodice++;}
            }
    	ncodice=0;
         
         
    	for(int i=0; i<lungc && ncodice<3; i++){ //Assegnazione codice nome
         if(nome.at(i)!='A' && nome.at(i)!='E' && nome.at(i)!='I' && nome.at(i)!='O' && nome.at(i)!='U' && nome.at(i)!=' '){
            codice=codice+nome.at(i);
            cout<<codice.at(j);
            j++;
            ncodice++;}
         }
    	ncodice=0;
        
	
	system("PAUSE");
}

