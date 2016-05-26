//
//  TableTannisPlayer.hpp
//  
//
//  Created by Durgesh Trivedi on 11/05/16.
//
//

#ifndef TableTannisPlayer_hpp
#define TableTannisPlayer_hpp

#include <stdio.h>

#include <string>

using std::string;
// simple base class

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer (const string & fn = "none",
                       const string & ln = "none", bool ht = false);
                       void Name() const;
                       bool HasTable() const { return hasTable; };
                       void ResetTable(bool v) { hasTable = v; };
    };

#endif /* TableTannisPlayer_hpp */
