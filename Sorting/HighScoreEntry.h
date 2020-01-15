#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::fstream;
using std::ios;

class HighScoreEntry
{
public:
	HighScoreEntry();
	~HighScoreEntry();

	string name;
	int score;
	int level;
};

