//
//  RatedPlayer.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 11/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "RatedPlayer.hpp"
#include "TableTannisPlayer.hpp"

RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
                         const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
: TableTennisPlayer(tp), rating(r)
{
    
}