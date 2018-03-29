#include "utils.h"
#include "menu.h"
#include "gomoku.h"
#include "interface.h"
#include "player.h"
#include "humanPlayer.h"
#include "noobIA.h"
#include "heuristicBoard.h"
#include "randomPlayer.h"
#include "minMaxDynamicPlayer.h"
#include "defaultRules.h"

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	srand(time(NULL));
	//RandomPlayer	p1;
	//RandomPlayer	p2;
	//NoobIA		p1;
	//Menu		menu;
	HumanPlayer	black;
//	HumanPlayer	white;
	MinMaxDynamicPlayer		white(6);
//	srand(7);
//	MinMaxDynamicPlayer		white(4);
//	MinMaxDynamicPlayer		black(4);
	DefaultRules	rules;
	Interface		interface;
	Gomoku			gomoku(white, black, rules, interface);
	gomoku.start();

	success("end of the game");
	return (0);
}
