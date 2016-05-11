//
//  UseStock10.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 21/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>

#include "Stock10.hpp"

int mainp();
//int main()
//{
//    mainp();
//}

int mainp()
{
    {
        using std::cin;
        using std::cout;
        
        cout << "Using constructors to create new objects\n";
        
        Stock10 stock1("Wipro ",12,20.0); // first way to create a object
        
        stock1.show();
        
        Stock10 stock2 =Stock10("INfosis stock",10,30.0);
        
        stock2.show();
        
        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();
        
        cout << "Using a constructor to reset an object\n";
        stock1 = Stock10("Nifty Foods", 10, 50.0); // temp object
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
        
        //C++11 Style constructor
        
        Stock10 stock3 = {"TCS",20,30.0};
        
        Stock10 stock4{"Mine",1,40.0};
        
        
        Stock10 stock5{};
        
        Stock10 stockarray[4];
        
        stockarray[0].show();
        stockarray[1].buy(20.0, 200);
        
        const Stock10 stock = stockarray[2].topval(stockarray[0]);
        
        stock.show();
        
        const int SKT = 4;
        
        Stock10 stoks[SKT] = {
            Stock10("Congni",20,2000),
            Stock10("MICRO",20,300),
            Stock10("APPLE",20,4000),
            Stock10("GOOGLE",20,400),
            
        };
         // differenct constructor
        Stock10 stocks[SKT] = {
            Stock10("NanoSmart", 12.5, 20),
            Stock10(),
            Stock10("Monolithic Obelisks", 130, 3.25),
        };
        
        std::cout << "Stock holdings:\n";
        int st;
        for (st = 0; st < SKT; st++)
            stocks[st].show();
    
        
        // set pointers to the first elements
        
        const Stock10 *top = &stocks[0];
        
        for (st = 0; st <SKT; st++) {
            top =  &top->topval(stoks[0]);//&top->topval(stocks[st]);
        }
        
        top->show();
        
        
        Stock10 *st1 = new Stock10();
        
        st1->show();
        
    }
    return 0;
    }
