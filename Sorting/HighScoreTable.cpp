#include "HighScoreTable.h"


HighScoreTable::HighScoreTable()
{
}

HighScoreTable::HighScoreTable(string fileName)
{
	HighScoreEntry tmp;
	txtFile.open(fileName, ios::in);
	while (std::getline(txtFile, buffer))
	{
		txtFile >> tmp.name >> tmp.score >> tmp.level;
		hsVector.push_back(tmp);
	}

	for (int i = 0; i < hsVector.size(); ++i)
	{
		for (int j = 1; j < hsVector.size()-1; ++j)
		{
			if (hsVector[j].score < hsVector[j - 1].score)
			{
				tmp = hsVector[j];
				hsVector[j] = hsVector[j - 1];
				hsVector[j - 1] = tmp;
			}
		}
	}
	txtFile.close();
}

bool HighScoreTable::pruneBottomNNScores(int bottomRows)
{
	if (bottomRows > hsVector.size())
	{
		return false;
	}
	else
	{
		for (int i = 0; i < bottomRows; ++i)
		{
			hsVector.pop_back();
		}
		txtFile.open("highscores.txt", ios::out);
		for(int i = 0; i < hsVector.size(); ++i)
		{
			txtFile << hsVector[i].name << "\t" << hsVector[i].score << "\t" << hsVector[i].level << endl;
		}
		txtFile.close();
		return true;
	}
}

void HighScoreTable::printHighScores(vector<HighScoreEntry> _table, int _entryNum)
{
	_entryNum = _table.size();
	for (int i = 0; i < _entryNum-1; ++i)
	{
		cout << _table[i].name << "\t" << _table[i].score << "\t" << _table[i].level << endl;
	}
	system("pause");
}

vector<HighScoreEntry> HighScoreTable::topNNScores(int topRows)
{
	vector<HighScoreEntry> topScores;
	for (int i = 0; i < topRows; ++i)
	{
		topScores[i].name = hsVector[i].name;
		topScores[i].score = hsVector[i].score;
		topScores[i].level = hsVector[i].level;
	}
	return topScores;
}

HighScoreTable::~HighScoreTable()
{
}
