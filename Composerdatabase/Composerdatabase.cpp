#include <iostream>
#include "Database.h"
using namespace std;



int main()
{
    cout <<"This is the Composer Management System\n";
    
    Database db;
    
    Composer* cmp1 = db.addComposer("steven", "wilson", "drive home", "rock", 1982, 5);
    Composer* cmp2 = db.addComposer("john", "lenon", "tear up", "classical", 1974, 2);
    Composer* cmp3 = db.addComposer("pink", "floyd", "tear up", "classical", 1974, 6);
    Composer* cmp4 = db.addComposer("bitter", "sweet", "tear up", "classical", 1974, 9);
    
    
   db.DisplayByRank();
   

    
    
    

    
}


