//
//  RatedPlayer.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 11/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef RatedPlayer_hpp
#define RatedPlayer_hpp

#include <stdio.h>
#include "TableTannisPlayer.hpp"

class RatedPlayer :public TableTennisPlayer
{
    private :
    unsigned int rating;
public:
    RatedPlayer (unsigned int r = 0, const string & fn = "none",
                 const string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() const { return rating; } // add a method
    void ResetRating (unsigned int r) {rating = r;} // add a method
    
    
};
#endif /* RatedPlayer_hpp */
