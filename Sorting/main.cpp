#include "HighScoreTable.h"

int main()
{
	HighScoreTable test ("highscores.txt", 1);

	//test.pruneBottomNNScores(7);

	test.printHighScores(test.hsVector);

	//vector<HighScoreEntry>topScores = test.topNNScores(3);
	//test.printHighScores(topScores);

	while(true){}

	return 0;
}