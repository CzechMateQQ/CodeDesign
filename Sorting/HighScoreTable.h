#pragma once
#include "HighScoreEntry.h"

class HighScoreTable
{
public:
	HighScoreTable();
	HighScoreTable(string fileName);
	bool pruneBottomNNScores(int bottomRows);
	void printHighScores(vector<HighScoreEntry> _table, int _entryNum);
	~HighScoreTable();

	vector<HighScoreEntry> hsVector;
	vector<HighScoreEntry> topNNScores(int topRows);
	fstream txtFile;
	string buffer;
};

