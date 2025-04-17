#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.hpp"

class Personnage
{
    /*
    public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    Personnage(Personnage const& personnageACopier);
    ~Personnage();

    Personnage& Personnage::operator=(Personnage const& personnageACopier); 

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat();
    void afficherPointeurArme();

    private:

    int m_vie;
    int m_mana;
    Arme* m_arme;
    */

    public:
        Personnage();
        void recevoirDegats(int degats);
        void coupDePoing(Personnage &cible) const;
 
    private:
        int m_vie;
        std::string m_nom;
};

#endif
