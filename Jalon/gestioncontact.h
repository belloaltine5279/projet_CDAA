#ifndef GESTIONCONTACT_H
#define GESTIONCONTACT_H
#include <iostream>
#include <ctime>
#include <list>
#include "contact.h"

using namespace std;


class GestionContact
{
private:
    list<Contact> ListContact ;
public:
    GestionContact();
    ~GestionContact() ;

    void addContact(const Contact &) ;
    void removeContact(const string &) ;
    void modifierContact(const string &, const char &, const string &) ;

    list<Contact> get_ListContact() const ;
    void set_ListContact(const list<Contact> &);

    Contact found_contact(const string &) ;
};

void affiche_gestion(const GestionContact &) ;

#endif // GESTIONCONTACT_H
