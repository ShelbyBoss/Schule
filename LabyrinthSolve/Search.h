#include "Block.h"
#include "Labyrinth.h"
#include "Target.h"

#pragma once
class Search
{
public:
	Search(Labyrinth labyrinth, Target target);

	Labyrinth labyrinth;	// Das Labyrinth in dem die Route liegt.
	Target target;			// Das Target das angesteuert wird.

	Block *current;			
	// Der Pointer der auf den ersten Eintrag im Array der aktuellen Route zeigt.
	int currentLength;		
	// Die L�nge der aktuellen Route.
	
	Block *found;			
	// Der Pointer der auf den ersten Eintrag im Array der gefundenen Route zeigt.
	int foundLength;		
	// Die L�nge der gefundenen Route. Wenn noch keine gefunden wurde ist der Wert -1.

	int **minDistances;
	// Der Pointer der auf den ersten Eintrag des zweidimensionalen Arrays zeigt, 
	// das die minimal Distanz vom Startblock zum Block an dieser Position angibt.
	// Mit minimal Distanz ist die geringste L�nge der aktuellen Route gemint, 
	// die ben�tigt wurde um diesen Block zu erreichen. 

	void Add(Block block);
	// Die Methode, die sich solange selbst aufruft 
	// mit Nachbarbl�cken, bis das Target erreicht ist.

	bool TryAdd(Block block);
	// �berpr�ft anhand der Ma�nahmen zur Effizienzsteigerung 
	// ob der Block �bersprungen werden kann.

	// PS: Mit currentLength kann die aktuelle Route gek�rzt werden, 
	// da alle Pl�tze danach zum �berschreiben freigegeben sind.
};

