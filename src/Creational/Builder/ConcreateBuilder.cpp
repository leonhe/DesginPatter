//
//  ConcreateBuilder.cpp
//  DesginPatter
//
//  Created by He Leon on 14-8-17.
//  Copyright (c) 2014年 Yuanfei He. All rights reserved.
//

#include "ConcreateBuilder.h"
#include "ProductA.h"
#include "ProductB.h"
#include "Product.h"
#include <vector>

using namespace builder;
using namespace std;
void ConcreateBulder::bulderProductA()
{
    Product *p = new ProductA();
    vList.push_back(p);
    p=new ProductB();
    vList.push_back(p);
}

void ConcreateBulder::getResult()
{
    typedef vector<Product*>::iterator pItore;
    for (pItore itore = vList.begin();itore!=vList.end() ; itore++) {
        Product *p = *itore;
        p->print();
    }
}