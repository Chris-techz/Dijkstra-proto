#ifndef DIJSKTRA_H
#define DIJKSTRA_H

#include <iostream>

#define MAX 5

struct Point
{
	int x, y, poid;
};

struct Case
{
	int droite, gauche, haut, bas;
};

class Dijkstra
{
private:
	int tableau[MAX][MAX] = {

					{ 3, 3, 10, 3, 3 },

					{ 10, 3, 3, 10, 3 },

					{ 10, 10, 3, 10, 10 },

					{ 10, 3, 0, 3, 3 },

					{ 3, 3, 3, 3, 10 }
	};
	Point nodes[MAX * MAX] = { 0 };

public:
	Dijkstra();
	~Dijkstra();
	void Scan();

};

#endif DIJKSTRA_H