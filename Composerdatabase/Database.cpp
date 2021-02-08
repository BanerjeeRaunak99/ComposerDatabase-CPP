#include <iostream>
#include <vector>
#include <algorithm>
#include "Database.h"
using namespace std;

//constructor and destructor
Database::Database() {
	m_NextSlot = 0;
}
Database::~Database() {}

//functional methods
Composer* Database::addComposer(string in_first_name, string in_last_name, string in_fact,
	string in_composer_genre, int in_composer_yob, int in_composer_rank) {
	Composer composer;
	composer.setFirstName(in_first_name);
	composer.setLastName(in_last_name);
	composer.setFact(in_fact);
	composer.setComposerGenre(in_composer_genre);
	composer.setComposerYOB(in_composer_yob);
	composer.setComposerRank(in_composer_rank);
	m_Composers[m_NextSlot] = composer;
	m_NextSlot++;
	return &composer;
}
Composer* Database::getComposer(string in_last_name) {
	for (Composer temp_composer : m_Composers) {
		if (temp_composer.last_name() == in_last_name)
			return &temp_composer;
	}
	return nullptr;


}
void Database::DisplayAll() {
	int i = 0;
	for (i = 0; i < m_NextSlot;i++) {
		cout << "#" << i+1 << m_Composers[i].first_name() << "\t"<<m_Composers[i].last_name()<<"\n";
	}

}

void Database::DisplayByRank() {
	vector<Composer> RankOrder(m_Composers, m_Composers + m_NextSlot);
	sort(RankOrder.begin(), RankOrder.end(), [](Composer& lhs, Composer& rhs) {
		return lhs.composer_rank() < rhs.composer_rank();
		});
	for (int i = 0; i < m_NextSlot; i++) {
		cout << "#" << i + 1 << RankOrder[i].first_name() << "	" << RankOrder[i].last_name() << "\n";
	}
}



