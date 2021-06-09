#ifndef DIJSKTRA_H
#define DIJKSTRA_H

#define MAX 5

#include <fstream>
#include <iostream>

class Dijkstra
{
private:
	int valeurs[MAX][MAX] = { 0 };
	double dim[2] = { 1, 1 };
public:
	void Display();
	//void Calcul();
	//void Gen();
};

#endif DIJKSTRA_H