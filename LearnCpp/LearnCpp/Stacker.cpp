//
//  Stacker.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 21/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>
#include <cctype> 

int main8();
//int main()
//{
//    main8();
//}

int main8()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
    << "P to process a PO, or Q to quit.\n";
    
    while (cin >> ch &&  toupper(ch) != 'Q') {
        while (cin.get() != '\n')
            continue;
        
            if (!isalpha(ch))
            {
                cout << '\a';
                continue;
            }
            
            switch(ch)
            {
                case 'A':
                case 'a': cout << "Enter a PO number to add: ";
                    cin >> po;
                    if (st.isFull())
                        cout << "stack already full\n";
                    else
                        st.push(po);
                    break;
                case 'P':
                case 'p': if (st.isEmpty())
                    cout << "stack already empty\n";
                else {
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                    break;
        }
    }
    return 0;

}
