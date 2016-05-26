//
//  TableTannisPlayer.cpp
//  
//
//  Created by Durgesh Trivedi on 11/05/16.
//
//

#include "TableTannisPlayer.hpp"
#include <iostream>

TableTennisPlayer ::TableTennisPlayer (const string & fn,
                                       const string & ln, bool ht) : firstname(fn),
lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << "," << firstname;
}

