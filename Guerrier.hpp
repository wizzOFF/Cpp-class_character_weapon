
#ifndef DEF_GUERRIER
#define DEF_GUERRIER
 
#include <iostream>
#include <string>
#include "Personnage.hpp"
//Ne pas oublier d'inclure Personnage.hpp pour pouvoir en hériter !
 
class Guerrier : public Personnage
//Signifie : créer une classe Guerrier qui hérite de la classe Personnage
{
    public:
        void frapperAvecUnMarteau() const;
        //Méthode qui ne concerne que les guerriers
};

void Guerrier::sePresenter() const
{
    /*
    cout << "Bonjour, je m'appelle " << m_nom << "." << endl;
    cout << "J'ai encore " << m_vie << " points de vie." << endl;
    cout << "Je suis un Guerrier redoutable." << endl;
    */

    Personnage::sePresenter();
    //Cela afficherait les informations de base
    
    cout << "Je suis un Guerrier redoutable." << endl;
    //Et ensuite les informations spécifiques
}
 
#endif