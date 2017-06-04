#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int maksWierszy = 5;
	const int maksZnakow = 160;

	int aktualnyZnak = 0;

	double poczatekOdcinka = 0;
	double koniecOdcinka = 0;
	double dlugoscOdcinka = 0;

	char znak[maksZnakow]; // wiersz do wyswietlenia



	for (int wiersz = 0; wiersz < maksWierszy; wiersz++) // aktualny wiersz 
	{
		aktualnyZnak = 0;
		poczatekOdcinka = (1 / (pow(3, wiersz)) * maksZnakow); //  Wyznaczanie jednego odcinka
		koniecOdcinka = (2 / (pow(3, wiersz)) * maksZnakow);   //  na podstawie dwóch jego 
		dlugoscOdcinka = koniecOdcinka - poczatekOdcinka;           //  pierwszych punktów
		round(dlugoscOdcinka);                                 //

		for (int iloscOdcinkow = 0; iloscOdcinkow < pow(3, wiersz); iloscOdcinkow++) // podzielenie wiersza 
		{
			for (int znakWOdcinku = 0; znakWOdcinku < dlugoscOdcinka; znakWOdcinku++) // znak w podzielonym wierszu
			{
				if (iloscOdcinkow == 0 || iloscOdcinkow % 2 == 0) // Jeœli wiersz 0 lub podzielny, bez reszty, przez dwa
				{
					if (znak[aktualnyZnak] != ' ')
						znak[aktualnyZnak] = '_';
				}
				else
				{
					znak[aktualnyZnak] = ' ';
				}
				cout << znak[aktualnyZnak];
				if (aktualnyZnak == maksZnakow - 1) aktualnyZnak = 0;
				else { aktualnyZnak++; }
			}
		}
		cout << endl;
	}
	getchar();
	return 0;
}
