#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <stdio.h>
#include <iostream>

#define MAX 5

struct Case
{
	int droite, gauche, haut, bas;
};

struct Point
{
	int x, y;
};

class Dijkstra
{
private:
	Case c;
	Point objectif = {2, 3};
	int tableau[MAX][MAX] = { 
		{ 0, 3, 3, 3, 3 },
		{ 9, 3, 3, 9, 3 },
		{ 9, 9, 3, 9, 9 },
		{ 9, 3, 1, 3, 3 },
		{ 3, 3, 3, 3, 9 }
	};

public:
	void AfficherGrille();
	void Calcul();
	void LireCases();
	void ModifierPoid();
};

#endif DIJKSTRA_H