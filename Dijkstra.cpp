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

void Dijkstra::LireCases()
{

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
	Point positionActuelle;
	Point positionSuivante;
	bool found = false;

	do 
	{


	} while (found != true);
}