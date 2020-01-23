#pragma once
#include "HighScoreEntry.h"

class HighScoreTable
{
public:

	// Constructs a table with no entries
	HighScoreTable();

	// Constructs and populates a table with entries from a CSV 
	HighScoreTable(string fileName, int sortMethod);

	// Returns true if the number of entries removed matches the number requested.
	bool pruneBottomNNScores(int bottomRows);

	// Print scores to console
	void printHighScores(vector<HighScoreEntry> _table);

	~HighScoreTable();

	// Contains all current entries within the high score table
	vector<HighScoreEntry> hsVector;

	// Returns a new vector containing the top number of high score entries
	vector<HighScoreEntry> topNNScores(int topRows);
	
	fstream txtFile;
	string buffer;
};

