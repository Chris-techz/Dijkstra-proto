#include "Dijkstra.h"

void Dijkstra::Display()
{
	for (int i = 0; i < MAX; i++)
	{
		int j = 0;
		do
		{
			printf("%d ", valeurs[i][j]);
			j++;
		} while (j < MAX);
		std::cout << std::endl;
	}
}
/*
void Dijkstra::Gen()
{
	valeurs[2][1] = 1;
	valeurs[2][2] = 1;
	valeurs[2][3] = 1;
	valeurs[3][3] = 2;
	pt = { 3, 3 };
}

void Dijkstra::Calcul()
{
	
}*/