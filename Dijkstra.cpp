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
}

Point Dijkstra::LireCases(Point actuel)
{
	Point prochainePosition = { 0 };
	int min = 9;

	c.droite = tableau[actuel.y][actuel.x + 1];				//Lecture des cases adjacentes
	c.bas = tableau[actuel.y + 1][actuel.x];
	if (actuel.x - 1 > 0)
		c.gauche = tableau[actuel.y][actuel.x - 1];
	if (actuel.y - 1 > 0)
		c.haut = tableau[actuel.y - 1][actuel.x];

	
	if (min > c.droite) {									// Choix de la prochaine position
		min = c.droite;
		prochainePosition = { actuel.y, actuel.x + 1 };
	}
	if (min > c.bas) {
		min = c.bas;
		prochainePosition = { actuel.y + 1, actuel.x };
	}
	if (min > c.gauche) {
		min = c.gauche;
		prochainePosition = { actuel.y, actuel.x - 1 };
	}
	if (min > c.haut) {
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
			if(j > objectif.x && tableau[i][j] < 9)
				tableau[i][j] += 1;
			if (i > objectif.y && tableau[i][j] < 9)
				tableau[i][j] += 1;
			j++;
		} while (j < MAX);
	}
}

void Dijkstra::Calcul()
{
	Point positionActuelle = { 0 };
	Point positionSuivante = { 0 };
	bool found = false;

	positionSuivante = LireCases(positionActuelle);
	Avancer();


}

void Dijkstra::Avancer()
{

}