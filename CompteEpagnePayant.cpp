//
// Created by noureddine on 12/8/21.
//

#include "CompteEpagnePayant.h"

Banque::CompteEpagnePayant::CompteEpagnePayant(Client*C, Devise*D, Devise*E,double d):CompteCourant(C,D,E), Compte(C, D),CompteEpargne(C,D,d),ComptePayant(C,D,E)
{
}

bool Banque::CompteEpagnePayant::debiter(Devise*D)
{
    if (!this->check_moitier(D))return false;
    return this->ComptePayant::debiter(D);
}
