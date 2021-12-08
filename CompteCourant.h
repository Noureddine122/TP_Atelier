//
// Created by noureddine on 12/8/21.
//

#ifndef ATELIER_TP_COMPTECOURANT_H
#define ATELIER_TP_COMPTECOURANT_H


#pragma once
#include "Compte.h"
namespace Banque {
    class CompteCourant : virtual public Compte
    {
        Devise* decouvert;
    public:
        CompteCourant(Client*, Devise*,Devise*);
        bool debiter(Devise* D);
    };
}


#endif //ATELIER_TP_COMPTECOURANT_H
