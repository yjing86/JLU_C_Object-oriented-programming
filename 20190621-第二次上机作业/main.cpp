//
//  main.cpp
//  20190614-第二次上机作业
//
//  Created by 荆煜 on 2019/6/14.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
#include "duoxiangshi.hpp"
int main(int argc, const char * argv[]) {
    float x;
    Duoxiangshi a1;
    a1.set();
    cout<<"多项式"<<Duoxiangshi::return_number()<<"号为：";
    a1.print();
    cout<<endl<<endl<<"测试运算："<<endl<<"请输入x=";
    cin>>x;
    a1.print();
    cout<<"="<<a1.calculate(x)<<endl<<endl;
    Duoxiangshi a2;
    a2.set();
    cout<<"多项式"<<Duoxiangshi::return_number()<<"号为：";
    a2.print();
    cout<<endl<<endl<<"测试\"+\"："<<endl;
    Duoxiangshi a3=a1+a2;
    cout<<"多项式"<<Duoxiangshi::return_number()<<"号为：";
    a3.print();
    cout<<endl;
    Duoxiangshi::print_number();
    cout<<endl<<"测试\"-\"："<<endl;
    Duoxiangshi a4=a1-a2;
    cout<<"多项式"<<Duoxiangshi::return_number()<<"号为：";
    a4.print();
    cout<<endl;
    Duoxiangshi::print_number();
    cout<<endl<<"测试\"*\"："<<endl;
    Duoxiangshi a5=a1*a2;
    cout<<"多项式"<<Duoxiangshi::return_number()<<"号为：";
    a5.print();
    cout<<endl;
    Duoxiangshi::print_number();
    cout<<endl<<"测试\"=\"："<<endl;
    Duoxiangshi a6;
    a6=a1;
    cout<<"多项式"<<Duoxiangshi::return_number()<<"号为：";
    a6.print();
    cout<<endl;
    Duoxiangshi::print_number();
    cout<<endl<<"测试拷贝构造函数"<<endl;
    Duoxiangshi a7(a1);
    cout<<"多项式"<<Duoxiangshi::return_number()<<"号为：";
    a7.print();
    cout<<endl;
    Duoxiangshi::print_number();
    return 0;
}
