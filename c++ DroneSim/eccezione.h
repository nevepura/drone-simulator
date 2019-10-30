#ifndef ECCEZIONE_H
#define ECCEZIONE_H
#include <string>
using std::string;

class eccezione{
private:
    char quale;
public:
    eccezione(char);
    void stampa()const;
};

#endif // ECCEZIONE_H
