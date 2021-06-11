#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <stdio.h>
#include <iostream>

#define MAX 5						//Taille de la grille

struct Case							//Case adjacentes de la position actuelle
{
	int droite	= 9, 
		gauche	= 9, 
		haut	= 9	, 
		bas		= 9;	
};

struct Point						//Coordonnées X, Y
{
	int x,
		y;						
};

class Dijkstra
{
private:
	Case c;					//initialisé au poid maximum
	Point objectif = {2, 3};
	int tableau[MAX][MAX] = {		//3 = case libre
		{ 3, 3, 3, 3, 3 },			//9 = mur (poid max)
		{ 9, 3, 3, 9, 3 },			//1 = objectif
		{ 9, 9, 3, 9, 9 },			//Départ : X, Y = 0
		{ 9, 3, 1, 3, 3 },
		{ 3, 3, 3, 3, 9 }
	};

public:
	void AfficherGrille();							//Affiche la grille en console
	void Calcul();									//Dijkstra
	Point LireCases(Point positionActuelle);		//Voir les noeuds suivant poid du trajet
	void ModifierPoid();							//Modifie le poid en fonction des coordonnées de l'objectif
	void Avancer();									//Passe à la position suivante
};

#endif DIJKSTRA_H