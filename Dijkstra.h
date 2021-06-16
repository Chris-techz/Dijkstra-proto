#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <stdio.h>
#include <iostream>

//Taille de la grille
#define MAX 5	

//Case adjacentes de la position actuelle
struct Case							
{
	int droite	= 9, 
		gauche	= 9, 
		haut	= 9, 
		bas		= 9;	
};

//Coordonnées X, Y
struct Point						
{
	int y,
		x;						
};

class Dijkstra
{
private:
	Case c;					
	int tic = 0;
	Point objectif = {3, 2};
	int tableau[MAX][MAX] = {		
		{ 3, 3, 3, 3, 3 },	//3 = case libre
		{ 9, 9, 9, 9, 3 },	//9 = mur (poid max)
		{ 9, 3, 9, 9, 3 },	//1 = objectif	
		{ 9, 3, 1, 3, 3 },	//Départ : X, Y = 0
		{ 3, 3, 3, 3, 9 }
	};

public:
	//Affiche la grille en console
	void AfficherGrille();		
	//Dijkstra
	void Calcul();				
	//Voir le poid des cases adjacentes
	Point LireCases(Point positionActuelle);
	//Modifie le poid en fonction des coordonnées de l'objectif
	void ModifierPoid();
};

#endif DIJKSTRA_H