#include "Dijkstra.h"

Dijkstra::Dijkstra()
{
}


Dijkstra::~Dijkstra()
{
}


void Dijkstra::Scan()
{
	Point objectif = { 0 };
	objectif.x = 2;
	objectif.y = 3;

	int i = 0;
	int j = 0;
	int k = 0;
	Case caz = { 0 }; 
	Point pt_actuel = { 0 };
	Point pt_suivant = { 0 };
	int tic = 0;
	int oldtic = 0;

	bool jfound = false;

	while (i <= objectif.y)
	{
		if (jfound == true)
			i++;

		while (j <= objectif.x)
		{
			caz.droite = tableau[i][j + 1];
			caz.bas = tableau[i + 1][j];
			if (i > 0)
				caz.haut = tableau[i - 1][j];
			else
				caz.haut = 1;

			if (j > 0)
				caz.gauche = tableau[i][j - 1];
			else
				caz.gauche = 1;

			if (tableau[i][j] == 2 || tableau[i][j] == 0)
			{
				if(j <= pt_suivant.x)
					pt_actuel.x = j;
				if(i <= pt_suivant.y)
					pt_actuel.y = i;
				pt_actuel.poid = tableau[i][j];

				if ((caz.droite == 2 || caz.droite == 0) && tic != 4)
				{
					pt_suivant.x = j + 1;
					pt_suivant.y = i;
					pt_suivant.poid = tableau[i][j + 1];
					tic = 1;
					j++;
				}
				else if ((caz.bas == 2 || caz.bas == 0) && tic != 3)
				{
					pt_suivant.x = j;
					pt_suivant.y = i + 1;
					pt_suivant.poid = tableau[i + 1][j];
					tic = 2;
					i++;
				}
				else if ((caz.haut == 2 || caz.haut == 0) && tic != 2)
				{
					pt_suivant.x = j;
					pt_suivant.y = i - 1;
					pt_suivant.poid = tableau[i - 1][j];
					tic = 3;
					i--;
				}
				else if ((caz.gauche == 2 || caz.gauche == 0) && tic != 1)
				{
					pt_suivant.x = j - 1;
					pt_suivant.y = i;
					pt_suivant.poid = tableau[i][j - 1];
					tic = 4;
					j--;
				}
				oldtic = tic;
			}
		}
	}
}