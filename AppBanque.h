#pragma once
#include"CompteCourant.h"
#include"CompteEpargne.h"
#include"ComptePayant.h"
#include"CompteEpagnePayant.h"
#include"Client.h"
#include "MAD.h"
#include"Dollar.h"
#include<iostream>
namespace Banque {
	class AppBanque
	{
		vector<Client*> Clients;
		int i = 0;
	public:
		void Main()
		{
			auto* Cl = new Client("User1", "user1", "address");
            Clients.push_back(Cl);
            auto* Cl2 = new Client("User2", "user2", "address");
            Clients.push_back(Cl2);

			CompteEpagnePayant A(Cl, new MAD(2000), new MAD(100),5);
            CompteEpagnePayant B(Cl2,new MAD(3000), new MAD(2000),10);
			int choix;
			double Val;
			MAD* VAL;
			do
			{

				cout << "1-Retrait" << endl;
				cout << "2-Crédit" << endl;
				cout << "3-consultation" << endl;
				cout << "4-Archive" << endl;
                cout << "0-Sortie" << endl;
				cout << "donner votre choix:";
				cin >> choix;
				cout << "###################################" << endl;
				switch (choix)
				{
				case 1:
					cout << "Entrer votre valeur {DH}:";
					cin >> Val;
					if (A.debiter(new MAD(Val)))cout << "Done!" << endl;
					else cout << "Solde insuffisant" << endl;
					break;
				case 2:
					cout << "Entrer votre valeur {$}:";
					cin >> Val;
					A.crediter(new Dollar(Val));
					break;
				case 3:
					A.consulter();
					break;
				case 4:
					A.consulter_with_history();
					break;
				default:
					exit(1);
				}
				cout << "###################################" << endl;
			} while (true);
		}
	};
}
