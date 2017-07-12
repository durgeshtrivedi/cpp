//
//  FunctionTemplates.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 19/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#ifndef FunctionTemplates_hpp
#define FunctionTemplates_hpp

#include "stdheader.hpp"

template <typename T>
void swap (T &a, T &b);

template <typename T>  // new template
void swap (T *a, T *b, const int n);

void show(int a[]);
#endif /* FunctionTemplates_hpp */
