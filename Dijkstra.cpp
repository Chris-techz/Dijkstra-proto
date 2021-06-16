#include "Dijkstra.h"


void Dijkstra::AfficherGrille()
{
	std::cout << "Grille : " << std::endl;
	for (int i = 0; i < MAX; i++)
	{
		int j = 0;
		do
		{
			printf("%d ", tableau[i][j]);
			j++;
		} while (j < MAX);
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

Point Dijkstra::LireCases(Point actuel)
{
	Point prochainePosition = { 0 };
	c = { 9 };
	int min = 9;

	if (tic != 4 && actuel.y < MAX - 1) {
		c.bas = tableau[actuel.y + 1][actuel.x];
	}

	if (tic != 3 && actuel.x < MAX - 1) {
		c.droite = tableau[actuel.y][actuel.x + 1];				//Lecture des cases adjacentes
	}

	if (actuel.x - 1 > 0 && tic != 1) {
		c.gauche = tableau[actuel.y][actuel.x - 1];
	}

	if (actuel.y - 1 > 0 && tic != 2) {
		c.haut = tableau[actuel.y - 1][actuel.x];
	}

	
	if (min > c.bas && tic != 4) {
		tic = 2;
		min = c.bas;
		prochainePosition = { actuel.y + 1, actuel.x };
	}
	if (min > c.droite && tic != 3) {									// Choix de la prochaine position
		tic = 1;
		min = c.droite;
		prochainePosition = { actuel.y, actuel.x + 1 };
	}
	if (min > c.gauche && tic != 1) {
		tic = 3;
		min = c.gauche;
		prochainePosition = { actuel.y, actuel.x - 1};
	}
	if (min > c.haut && tic != 2) {
		tic = 4;
		min = c.haut;
		prochainePosition = { actuel.y - 1, actuel.x };
	}

	return prochainePosition;
}

void Dijkstra::ModifierPoid()
{
	for (int i = 0; i < MAX; i++)
	{
		int j = 0;
		do
		{
			if(j > objectif.y && tableau[i][j] < 9)
				tableau[i][j] += 1;
			if (i > objectif.x && tableau[i][j] < 9)
				tableau[i][j] += 1;
			j++;
		} while (j < MAX);
	}
}

void Dijkstra::Calcul()
{
	char entreeUser;
	Point positionActuelle = { 0 };
	Point positionSuivante = { 0 };
	bool found = false;

	do 
	{
		positionSuivante = LireCases(positionActuelle);

		if (positionActuelle.x == objectif.x && positionActuelle.y == objectif.y) {
			found = true;
			std::cout <<  " Objectif atteint ! "<< std::endl << std::endl;
		}
		else {
			positionActuelle = positionSuivante;
			std::cout << "Faites une entree clavier pour avancer ..." << std::endl;
			std::cin >> entreeUser;
			std::cout << "X:" << positionActuelle.x << " ; Y:" << positionActuelle.y << std::endl << std::endl;
		}

	} while (found != true);
}
