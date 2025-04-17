#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main()
{
    /* Création des personnages
    Personnage david, goliath("Epée aiguisée", 20);

    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    // Temps mort ! Voyons voir la vie de chacun...
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();
    */
    /*
    Personnage david;
    //Personnage goliath = david;

    Personnage goliath = david; //Constructeur de copie
    goliath = david; //operator=

    goliath.afficherPointeurArme();
    david.afficherPointeurArme();
    */
    /*
    Personnage marcel("Marcel");
    marcel.sePresenter();
    */

    Guerrier lancelot("Lancelot du Lac");
    lancelot.sePresenter();

    return 0;
}
