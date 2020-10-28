//
//  main.cpp
//  20190614-第三次上机作业
//
//  Created by 荆煜 on 2019/6/14.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
#include "String.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    String s="jilin university",u;
    String t=s;
    s.print();
    t.print();
    u=s;
    u.print();
    String v=s.cat(u);
    v.print();
    int n=v.length();
    cout<<n<<endl;
    return 0;
}
