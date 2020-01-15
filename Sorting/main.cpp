#include "HighScoreTable.h"

int main()
{
	HighScoreTable test("highscores.txt");

	test.printHighScores(test.hsVector, test.hsVector.size());

	std::vector<HighScoreEntry>topScores = test.topNNScores(3);
	test.printHighScores(topScores, topScores.size());

	while(true){}

	return 0;
}