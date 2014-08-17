//
//  Factory.h
//  DesginPatter
//
//  Created by He Leon on 14-8-17.
//  Copyright (c) 2014年 Yuanfei He. All rights reserved.
//

#ifndef __DesginPatter__Factory__
#define __DesginPatter__Factory__

#include <iostream>
#include "AbstactFactory.h"


class Factory:public AbstactFactory
{
    static AbstactFactory* _instance;
    
public:
    static AbstactFactory* getInstance();
    Product *getProduct();
    Product *createProduct(PRODUCT_TYPE type);
    
};


#endif /* defined(__DesginPatter__Factory__) */
