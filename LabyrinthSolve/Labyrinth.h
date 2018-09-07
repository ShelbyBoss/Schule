#include "Block.h"

#define State_Open 0
#define State_Close 1
#define State_Unkown 2

#define Lab_Width 10
#define Lab_Height 10

#pragma once
class Labyrinth		// Verwaltet die Statuse der Blockrelations
{
public:
	Labyrinth();

	int Width;			// Gibt die Breite des Objekts in Bl�cken an.
	int Height;			// Gibt die H�he des Objekts in Bl�cken an.
	int **horizontal;	// Speichert den Status der horizontalen Blockrelations.
	int **vertical;		// Speichert den Status der vertikalen Blockrelations.

	int GetRelationState(Block block1, Block block2);	
	// Gibt den Status einer Blockrelation zwischen den angegeben Bl�cken zur�ck.

	void SetRelationState(Block block1, Block block2, int state);
	// Setzt den Status einer Blockrelation zwischen den angegeben Bl�cken.
};

