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
		static vector<Client*> Clients;
		int i = 0;
	public:
		static void Mymain()
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
				cout << "0-exit" << endl;
				cout << "1-retrait" << endl;
				cout << "2-crediter" << endl;
				cout << "3-consuler" << endl;
				cout << "4-history" << endl;
				cout << "donner votre choix:";
				cin >> choix;
				cout << "###################################" << endl;
				switch (choix)
				{
				case 1:
					cout << "donner la valeur en MAD:";
					cin >> Val;
					if (A.debiter(new MAD(Val)))cout << "Done!" << endl;
					else cout << "Not Enough money" << endl;
					break;
				case 2:
					cout << "donner la valeur en Dollar:";
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
