//
//  TablePlayer.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 11/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//
#include <iostream>
#include "TableTannisPlayer.hpp"
#include "RatedPlayer.HPP"


int main14();
//int main()
//{
//    int main14();
//}

int main14 ( void )
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("DOn","Tom",false);
    RatedPlayer rplayer1(1140, "MALLO","DOC",true);
    
    rplayer1.Name(); // derived object uses base method
    if (rplayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player1.Name(); // base object uses base method
    if (player1.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;
    // initialize RatedPlayer using TableTennisPlayer object
    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
    
    
    RatedPlayer rplayer3(1120, "MOCA","Choka",true);
                
    TableTennisPlayer &player = rplayer3;
    
    TableTennisPlayer *plaer3 = &rplayer2;
    
    
    return 0;
}
