//
//  shape.hpp
//  20190615-第五次上机作业
//
//  Created by 荆煜 on 2019/6/21.
//  Copyright © 2019 jingyu. All rights reserved.
//

#ifndef shape_hpp
#define shape_hpp
#include <iostream>
#include <stdio.h>
class Shape{
public:
    // . . .
    int a;
    virtual double area();
    virtual Shape* new_shape(){
        Shape* temp=new Shape(*this);
        return temp;
    }
};
class Circle:public Shape{
public:
    double area();
    Shape * new_shape(){
        Shape* temp=new Circle(*this);
        return temp;
    }
    // . . .
};
class Triangle:public Shape{
public:
    double area();
    Shape * new_shape(){
        Shape* temp=new Triangle(*this);
        return temp;
    }
    // . . .
};
// . . .
class Manage{
public:
    Shape  *a[100];
    Manage(){}
    Manage(const Manage & temp);
    void print(){
        for(int i=0;i<100;i++){
            a[i]->area();
        }
    }
    // . . .
};

#endif /* shape_hpp */
