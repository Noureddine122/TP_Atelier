//
// Created by noureddine on 12/8/21.
//

#ifndef ATELIER_TP_COMPTEEPAGNEPAYANT_H
#define ATELIER_TP_COMPTEEPAGNEPAYANT_H


#pragma once
#include"CompteEpargne.h"
#include"ComptePayant.h"
namespace Banque {
    class CompteEpagnePayant :virtual public CompteEpargne,virtual public ComptePayant
    {
    public :
        CompteEpagnePayant(Client*, Devise*, Devise*,double);
        bool debiter(Devise*) override;
    };
}

#endif //ATELIER_TP_COMPTEEPAGNEPAYANT_H
