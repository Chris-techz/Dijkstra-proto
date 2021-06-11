#include "Dijkstra.h"

int main(int argc, char* argv[])	
{
	Dijkstra obj;
	obj.AfficherGrille();
	obj.ModifierPoid();
	obj.AfficherGrille();
	obj.Calcul();

	return 0;
}