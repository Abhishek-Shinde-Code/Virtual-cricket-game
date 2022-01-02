#include<iostream>
#include "game.h"


using namespace std;

int main() {

	Game game;
	game.welcome();
    cout << "\nPress Enter to continue";
	cin.ignore();
	cin.get();


	game.showAllPlayers();

	cout << "\nPress Enter to continue";
	cin.get();


	   game.selectPlayers();
	   game.showTeamPlayers();

	  cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "\nPress Enter to toss";
	getchar();

	game.toss();

	game.startFirstInnings();

	game.startSecondInnings();

	game.showMatchSummary();


  return 0;

}
