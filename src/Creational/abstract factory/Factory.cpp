//
//  Factory.cpp
//  DesginPatter
//
//  Created by He Leon on 14-8-17.
//  Copyright (c) 2014年 Yuanfei He. All rights reserved.
//

#include "Factory.h"
#include "ProductA.h"
#include "ProductB.h"
#include <typeinfo>
#include <string>
using namespace std;


AbstactFactory* Factory::_instance=nullptr;

AbstactFactory* Factory::getInstance()
{
    if (_instance==nullptr) {
        _instance = new Factory();
    }
    return _instance;
}


Product *Factory::getProduct()
{
    return new ProductA();
}

Product *Factory::createProduct(PRODUCT_TYPE type)
{
    switch (type) {
        case PRODUCT_TYPE::P1:
            return new ProductA();
            break;
        case PRODUCT_TYPE::P2:
            return new ProductB();
            break;
        default:
            throw found_type_error("can't found setting type!",type);
            break;
    }
}