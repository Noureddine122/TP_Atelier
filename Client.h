//
// Created by noureddine on 12/8/21.
//

#ifndef ATELIER_TP_CLIENT_H
#define ATELIER_TP_CLIENT_H


#pragma once
#include <string>
#include<vector>
using namespace std;
namespace Banque {
    class Compte;
    class Client
    {
        // attributs
    private:
        string nom;
        string prenom;
        string adresse;
        vector<Compte*> Comptes;
    public:
        Client(string, string, string);
        void add_Compte(Compte*);
        void Afficher()const;
        ~Client();
    };
};

#endif //ATELIER_TP_CLIENT_H
