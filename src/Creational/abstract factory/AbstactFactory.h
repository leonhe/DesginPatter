//
//  AbstactFactory.h
//  DesginPatter
//
//  Created by He Leon on 14-8-17.
//  Copyright (c) 2014年 Yuanfei He. All rights reserved.
//

#ifndef DesginPatter_AbstactFactory_h
#define DesginPatter_AbstactFactory_h

#include "Product.h"
#include <typeinfo>

enum PRODUCT_TYPE{P1,P2,P3};

//自定找不到待创建类错误
class found_type_error:public std::logic_error
{
public:
    explicit found_type_error(const std::string msg):std::logic_error(msg){}
    found_type_error(const std::string msg,PRODUCT_TYPE p):std::logic_error(msg),type(p){}
    //需要创建的类型
    PRODUCT_TYPE type;
};


class AbstactFactory{
public:
    virtual Product* getProduct()=0;
    virtual Product* createProduct(PRODUCT_TYPE type)=0;
};


#endif
