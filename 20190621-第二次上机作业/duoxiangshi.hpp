//
//  duoxiangshi.hpp
//  20190611-第一次上机作业
//
//  Created by 荆煜 on 2019/6/14.
//  Copyright © 2019 jingyu. All rights reserved.
//

#ifndef duoxiangshi_hpp
#define duoxiangshi_hpp
#include <stdio.h>
using namespace std;
class Duoxiangshi
{
protected:
    int n=1;
    float *an=new float[n];
    static int number;
public:
    Duoxiangshi();
    ~Duoxiangshi();
    Duoxiangshi(const Duoxiangshi & temp);
    void set();
    void print() const;
    float calculate(float);
    static void print_number();
    static int return_number();
    friend Duoxiangshi operator+(const Duoxiangshi& a,const Duoxiangshi& b);
    Duoxiangshi operator-(const Duoxiangshi& temp);
    Duoxiangshi operator*(const Duoxiangshi& temp);
    Duoxiangshi& operator=(const Duoxiangshi& temp);
};
Duoxiangshi operator+(const Duoxiangshi& a,const Duoxiangshi& b);
#endif /* duoxiangshi_hpp */
