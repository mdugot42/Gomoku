#include "defaultRules.h"

DefaultRules::DefaultRules() : Rules()
{
}

DefaultRules::~DefaultRules()
{
}

 Rules *DefaultRules::copy() {
	DefaultRules *cpy = new DefaultRules();
	cpy->setGomoku(gomoku);
	cpy->setTurnCounter(turnCounter);
	return cpy;
}

bool DefaultRules::canPutStone(Player &player, int x, int y) {
	if (player.getMyHeuristic()->checkDoubleFreeThree((unsigned char)x, (unsigned char)y))
		return false;
	if (gomoku->getStone(x, y) == FREE)
		return true;
	return false;
}
