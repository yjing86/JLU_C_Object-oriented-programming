//
//  duoxiangshi.cpp
//  20190611-第一次上机作业
//
//  Created by 荆煜 on 2019/6/14.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
#include "duoxiangshi.hpp"
int Duoxiangshi::number=0;
Duoxiangshi::Duoxiangshi()
{
    number++;
    do{
        if(n<=0)
            cout<<"n应为正自然数"<<endl;
        cout<<"请输入该多项式有多少项：";
        cin>>n;
    }while(n<=0);
    for(int i=0;i<n;i++)
    {
        cout<<"请输入a"<<i<<"=";
        cin>>an[i];
    }
}
Duoxiangshi::~Duoxiangshi()
{
    number--;
}
Duoxiangshi::Duoxiangshi(const Duoxiangshi & temp)
{
    number++;
    n=temp.n;
    an=new float[n];
    for(int i=0;i<n;i++)
    {
        an[i]=temp.an[i];
    }
}
void Duoxiangshi::print()const
{
    for(int i=0;i<n;i++){
        switch(i)
        {
            case 0:
            {
                cout<<an[0];
                break;
            }
            case 1:
            {
                cout<<an[1]<<"X";
                break;
            }
            default:
            {
                cout<<an[i]<<"X^"<<i;
            }
        }
        if(i!=(n-1))
            cout<<"+";
    }
}
float Duoxiangshi::calculate(float x)
{
    float sum=0,temp=1;
    for(int i=0;i<n;i++)
    {
        temp=an[i];
        for(int j=0;j<i;j++)
        {
            temp*=x;
        }
        sum+=temp;
    }
    return sum;
}
void Duoxiangshi::print_number()
{
    cout<<"共有"<<number<<"个多项式"<<endl;
}
