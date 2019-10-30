#include "eccezione.h"
#include <iostream>
using std::cout;

eccezione::eccezione(char c): quale(c){}

void eccezione::stampa() const {
    switch(quale){
    case('b'):
        cout<<"batteria esaurita\n";
        break;
    case('m'):
        cout<<"mossa non valida\n";
        break;
    case('s'):
        cout<<"accensione/spegnimento già effettuato\n";
        break;
    case('v'):
        cout<<"Valori non validi\n";
        break;
    default:
        cout<<"Eccezione generica\n";
        break;
    }
}
