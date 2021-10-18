#include <QCoreApplication>
#include <iostream>

#include "contact.h"
#include "gestioncontact.h"
#include "interaction.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int telephone = 203429052 ;

    GestionContact gc ;
    Contact c ;
    c.set_nom("anonyme")  ;
    c.set_entreprise("oood") ;
    c.set_mail("c@gmail.com") ;
    c.set_prenom("Ox001x") ;
    c.get_telephone().push_back(telephone) ;

    gc.addContact(c) ;
    affiche(c) ;

    return a.exec();
}
