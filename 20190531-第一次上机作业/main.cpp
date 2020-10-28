//
//  main.cpp
//  20190531-第一次上机作业
//
//  Created by 荆煜 on 2019/5/30.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
#include "class.h"
using namespace std;

int main(int argc, const char * argv[]) {
    int num=0;
    cout<<"该多项式有多少项：";
    while(scanf("%d",&num)&&num!=0){
        for(int number=1;number<=num;number++){
            an[n].set(number);
        }
        double sum=0,x;
        int i=1;
        cout<<"请输入x=";
        cin>>x;
        while(i<=n){
            sum+=an[i].calculate(x,i);
            i++;
        }
        an[n].print(x);
        cout<<(int)sum<<endl;
        n++;
    }
    cout<<"运行结束！";
}
