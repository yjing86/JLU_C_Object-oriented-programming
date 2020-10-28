//
//  shape.cpp
//  20190615-第五次上机作业
//
//  Created by 荆煜 on 2019/6/21.
//  Copyright © 2019 jingyu. All rights reserved.
//
#include "shape.hpp"
using namespace std;
double Shape::area(){
    cout<<"图形面积为f("<<a<<")"<<endl;
    return a;
}
double Circle::area(){
    cout<<"圆形面积为g("<<a<<")"<<endl;
    return a;
}
double Triangle::area(){
    cout<<"三角形面积为h("<<a<<")"<<endl;
    return a;
}
Manage::Manage(const Manage & temp){
    for(int i=0;i<100;i++){
        a[i]=temp.a[i]->new_shape();
    }
}
