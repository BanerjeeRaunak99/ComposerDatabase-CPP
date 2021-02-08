#pragma once
#include <string>
using namespace std;
const int kDefaultRanking = 10;
class Composer
{
	//member variables
	string m_FirstName;
	string m_LastName;
	string m_Fact;
	string m_ComposerGenre;
	int m_Yob;
	int m_Rank;

public:
	//constructor and destructor
	Composer();
	~Composer();
	//Mutators
	void setFirstName(string in_first_name);
	string first_name();
	void setLastName(string in_last_name);
	string last_name();
	void setFact(string in_fact);
	string fact();
	void setComposerGenre(string in_composer_genre);
	string composer_genre();
	void setComposerYOB(int in_composer_yob);
	int composer_yob();
	void setComposerRank(int in_composer_rank);
	int composer_rank();

	//methods
	void Promote(int increment);	//increase a composer's ranking
	void Demote(int decrement);		//decrese a composer's ranking
	void Display();		//display composer's attributes


};

