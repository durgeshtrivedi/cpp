//
//  ArrayPointer.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 10/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "ArrayPointer.hpp"

const int arySize = 8;
void array_Pointer() {

    int cookies[arySize] = {1,2,3,4,5,6,7,8};
    
    int sum = sum_of_array(cookies, cookies + arySize);
    
    cout << "Total no of cookies eatten " << sum << endl;
    
    sum = sum_of_array(cookies, cookies + 3);
    
    cout << "Sum of 3 cookies eatten " << sum << endl;
    
    sum = sum_of_array(cookies + 4, cookies + 8);
    
    cout << "Sum of last 4 cookies eatten " << sum << endl;
    
    count_Char();
}

int sum_of_array(const int *begin, const int *end) {
    
    const int *pt;
    int total = 0;
    for (pt = begin; pt != end; pt++) {
        
        total  += *pt;
    }
    
    return total;
}

void count_Char() {
    
    char str1[20] = "Durgesh Trivedi";
    int count = numberofChar_in_string(str1, 'e');
    
    cout << "Count for character 'e' in the string  Durgesh Trivedi  " << count << endl;
    
    char *newstr = "Ram lakhan";
    
    count = numberofChar_in_string(newstr, 'a');
    
    cout << "Count for character 'a' in the string  Ram lakhan " << count << endl;
}

int numberofChar_in_string(char *str, char match) {
    
    
    int count = 0;
    while (*str) {
    
        if(*str == match) {
            count++;
        }
        str++;
       
    }
    return count;
}
