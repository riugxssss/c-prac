#include <iostream>

using namespace std;

int main(){
    int guess = 1;
    int limit = 3;
    int secnum = 23;
    int sceltanum;
    bool out = false;
    while(secnum != sceltanum and !out){
        if(guess <= limit){

             cout <<"Giocatore perfavore inserisci il numero giusto: ";
            cin >> sceltanum;
            cout <<"Scelte date: " << guess << endl;
            guess++;
            cout << "Numero scelto: "<< sceltanum << endl;
            if(sceltanum == secnum){
                cout << "Hai indovinato il numero segreto! ";
                out = true;
            } else if (sceltanum < secnum){
                cout << "Hai scelto un numero troppo basso \n";
            } else {
                cout << "Hai scelto un numero troppo alto \n";

            }

        } else {
            cout << "Mi dispiace giocatore, hai perso ed hai finito le risposte.";
            out = true;
        }
        


    }


    return 0;
} 

//gioco con il numero segreto! fatto da riugxss