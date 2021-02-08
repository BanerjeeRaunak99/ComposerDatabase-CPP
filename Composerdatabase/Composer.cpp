#include <iostream>
#include "Composer.h"
using namespace std;
const string ph = "Unknown";

//default constructor
Composer::Composer() :m_FirstName(ph), m_LastName(ph), m_ComposerGenre(ph), m_Fact(ph), m_Rank(kDefaultRanking), m_Yob(0) {}
//default desstructor 
Composer::~Composer() {}

// mutation methods

void Composer::setFirstName(string in_first_name) {
	m_FirstName = in_first_name;
}
string Composer::first_name() {
	return m_FirstName;
}
void Composer::setLastName(string in_last_name) {
	m_LastName = in_last_name;
}
string Composer::last_name() {
	return m_LastName;
}
void Composer::setFact(string in_fact) {
	m_Fact = in_fact;
}
string Composer::fact() {
	return m_Fact;
}
void Composer::setComposerGenre(string in_composer_genre) {
	m_ComposerGenre = in_composer_genre;
}
string Composer::composer_genre() {
	return m_ComposerGenre;
}
void Composer::setComposerYOB(int in_composer_yob) {
	m_Yob = in_composer_yob;
}
int Composer::composer_yob() {
	return m_Yob;
}
void Composer::setComposerRank(int in_composer_rank) {
	m_Rank = in_composer_rank;
}
int Composer::composer_rank() {
	return m_Rank;
}

//functional methods
//increase a composer's rating
void Composer::Promote(int increment) {
	if (m_Rank - increment < 1) {
		cout << "Already Highest Rated!\n";
		return;
	}
	else {
		m_Rank -= increment;
	}
}
void Composer::Demote(int decrement) {
	if (m_Rank + decrement > kDefaultRanking) {
		cout << "Already lowest rated!\n";
		return;
	}
	else {
		m_Rank += decrement;
	}
}
void Composer::Display() {
	cout << "First Name:\t" << m_FirstName << "\n";
	cout << "Last Name:\t" << m_LastName << "\n";
	cout << "Genre:\t" << m_ComposerGenre << "\n";
	cout << "Year of Birth:\t" << m_Yob << "\n";
	cout << "Rating:\t" << m_Rank << "\n";
	cout << "Fact:\t" << m_Fact << "\n";
	cout << "inside composer display";

}





