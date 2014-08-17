//
//  Builder.h
//  DesginPatter
//
//  Created by He Leon on 14-8-17.
//  Copyright (c) 2014年 Yuanfei He. All rights reserved.
//

#ifndef DesginPatter_Builder_h
#define DesginPatter_Builder_h

namespace builder {
    class Builder
    {
    public:
       virtual  void bulderProductA()=0;
        virtual void getResult()=0;
    };
}


#endif
