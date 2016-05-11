//
//  NameSpaceValues.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 20/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

namespace JIll {
    double fetch;
    
    double Show ()
    {
        return 0.0;
    }
    
    struct Value{
    
        int value;
        string name;
    };
}

namespace HIll {
    double fetch;
    
    double Show ()
    {
        return 0.0;
    }
    
    struct Value{
        
        int value;
        string name;
    };
}

namespace elements
{
    namespace fire
    {
        int water;
    }
    
    float earth;
}

namespace Myth {
    using namespace elements;
    using namespace elements ::fire;
    
    using std:: cout;
    using std:: cin;
}

using namespace elements:: fire;

//char fetch;

//int main(){
//
//    using JIll:: fetch;
//    
//    //double fetch; // it will give a error redeclaration because using directive
//    
//    cin>> fetch ; // read a value in to JILL:: fetch
//
//    
//    cin >> ::fetch;  // read a value in to  global fetch
//
//}

using HIll:: fetch;  // make fetch as a global namespce from from hill

//int main()
//{
//    cin >> fetch; // read the value in global fatch
//    
//    cout << elements ::fire::water ;
//    
//    cout << Myth:: water;  // you can now directly call water from myth
//
//    cout << Myth:: earth;  // you can now directly call water from myth
//}


