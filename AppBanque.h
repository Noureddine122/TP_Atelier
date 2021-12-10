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
		int i = 0;
	public:
		void Main()
		{
			auto* Cl = new Client("Noureddine", "Achibane", "AGADIR");

			CompteEpagnePayant A(Cl, new MAD(2000), new MAD(100),5);
			int choix;
			double Val;
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
				case 0:
                    cout << "En revoir :)";
					exit(1);
                default:
                    cout << "Entrer a valid option" << endl;
				}
				cout << "###################################" << endl;
			} while (true);
		}
	};
}
