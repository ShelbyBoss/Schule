#pragma once
#include "Block.h"
#include "Labyrinth.h"

class Target
{
public:
	virtual int GetMinDistance(Block block);
	// Gibt den minimal Abstand eines Blocks zu dem Objekt an, in Bl�cken.

	virtual int GetOrderedBlocks(Block block, Labyrinth labyrinth, Block neighbours[]);
	// Gibt die Anzahl der Nachbarbl�cke des Blocks direkt zur�ck und
	// die Nachbarbl�cke selbst in prioriesierter Reihenfolge im Array neighbours.
	// Der Block mit der k�rzesten Luftlinie zum Objekt ist das erste im Array.
};

