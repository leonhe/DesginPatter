//
//  main.cpp
//  DesginPatter
//
//  Created by He Leon on 14-8-17.
//  Copyright (c) 2014年 Yuanfei He. All rights reserved.
//

#include <iostream>
using namespace std;
#include "AbstactFactory.h"
#include "Factory.h"
#include <typeinfo>
#include "Builder.h"
#include "ConcreateBuilder.h"
int main(int argc, const char * argv[])
{
    //Abstract Factory
    try {
        
    auto factory = Factory::getInstance();
    auto product=factory->getProduct();
    product->print();
    
    auto p1=factory->createProduct(PRODUCT_TYPE::P1);
    p1->print();
    
    auto p2 = factory->createProduct(PRODUCT_TYPE::P2);
    p2->print();
    
//    auto p3 = factory->createProduct(PRODUCT_TYPE::P3);
//        p3->print();
    } catch (found_type_error e) {
        
        std::cout<<e.what()<<" create type is:"<<e.type<<std::endl;
    }
    cout<<"----------------------Builder Patter --------------------"<<endl;
    //Builder
    auto builder = new ConcreateBulder();
    builder->bulderProductA();
    builder->getResult();
    return 0;
}

