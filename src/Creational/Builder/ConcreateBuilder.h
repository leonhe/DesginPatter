//
//  ConcreateBuilder.h
//  DesginPatter
//
//  Created by He Leon on 14-8-17.
//  Copyright (c) 2014年 Yuanfei He. All rights reserved.
//

#ifndef __DesginPatter__ConcreateBuilder__
#define __DesginPatter__ConcreateBuilder__

#include <iostream>
#include <vector>
#include "Product.h"
#include "Builder.h"
class ConcreateBulder:public builder::Builder
{
    std::vector<Product*> vList;
public:
    void bulderProductA();
    void getResult();
};

#endif /* defined(__DesginPatter__ConcreateBuilder__) */
