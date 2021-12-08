//
// Created by noureddine on 12/8/21.
//

#include "Client.h"
#include <iostream>
#include <algorithm>
using namespace Banque;
using namespace std;
Banque::Client::Client(string n, string p, string a)
{
    this->nom = n;
    this->prenom = p;
    this->adresse = a;
}

void Banque::Client::add_Compte(Compte*A)
{
    bool notFound = (std::find(begin(Comptes), end(Comptes), A) == end(Comptes));;
    if (notFound)Comptes.push_back(A);
}

void Banque::Client::Afficher() const
{
    cout << "nom :" << this->nom << "\n" << "prenom:" << this->prenom << "\n" << "Adresse:" << this->adresse << endl;
}

Banque::Client::~Client()
{
    for (auto & Compte : Comptes)
    {
        Compte = nullptr;
    }
}

