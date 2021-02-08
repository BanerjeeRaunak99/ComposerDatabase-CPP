#pragma once
#include "Composer.h"
using namespace std;
const int kMaxComposers = 100;
class Database
{
	Composer m_Composers[kMaxComposers];
	int m_NextSlot;
public:
	//constructor and destructor
	Database();
	~Database();

	//functional methods
	Composer* addComposer(string in_first_name, string in_last_name, string in_fact,
		string in_composer_genre, int in_composer_yob, int in_composer_rank);

	Composer* getComposer(string in_last_name);

	void DisplayAll();

	void DisplayByRank();


};

