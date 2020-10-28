//
//  main.cpp
//  20190611-第一次上机作业
//
//  Created by 荆煜 on 2019/6/14.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
#include "duoxiangshi.hpp"
int main(int argc, const char * argv[]) {
    Duoxiangshi a0;
    Duoxiangshi a1;
    cout<<"多项式为：";
    a1.print();
    float x;
    cout<<endl<<"x=";
    cin>>x;
    cout<<"a1:";
    a1.print();
    cout<<"="<<a1.calculate(x)<<endl;
    Duoxiangshi a2=a1;
    cout<<"a2:";
    a2.print();
    cout<<"="<<a1.calculate(x)<<endl;
    Duoxiangshi::print_number();
    return 0;
}
