#ifndef INTERACTION_H
#define INTERACTION_H
#include <iostream>
#include <ctime>
#include <string>
using namespace std ;

class Interaction
{
private:
    tm * date;
    string contenu ;
public:
    Interaction();
    Interaction(const tm &, const std::string &) ;
    ~Interaction() ;

    tm getDate() const ;
    string get_Contenu() const ;

    void setDate(const tm &) ;
    void setContenu(const string &) ;

    friend ostream& operator<<(std::ostream& , const Interaction &) ;
};

#endif // INTERACTION_H
