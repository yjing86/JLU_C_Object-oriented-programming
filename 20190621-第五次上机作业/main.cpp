//
//  main.cpp
//  20190615-第五次上机作业
//
//  Created by 荆煜 on 2019/6/14.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
#include "shape.hpp"
int main(int argc, const char * argv[]) {
    Manage manage1;
    Shape shape[33];
    for(int i=0;i<33;i++){
        shape[i].a=i;
        manage1.a[i]=&shape[i];
    }
    Circle circle[33];
    for(int i=0;i<33;i++){
        circle[i].a=i;
        manage1.a[i+33]=&circle[i];
    }
    Triangle triangle[34];
    for(int i=0;i<34;i++){
        triangle[i].a=i;
        manage1.a[i+66]=&triangle[i];
    }
    manage1.print();
    std::cout<<std::endl<<std::endl;
    Manage manage2=manage1;
    manage2.print();
    return 0;
}
