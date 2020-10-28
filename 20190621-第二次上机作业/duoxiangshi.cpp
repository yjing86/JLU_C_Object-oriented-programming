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
}
void Duoxiangshi::set()
{
    do{
        if(n<=0)
            cout<<"n应为正自然数"<<endl;
        cout<<"请输入"<<number<<"号多项式有多少项：";
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
    int panduan=0;
    for(int i=0;i<n;i++){
        switch(i)
        {
            case 0:
            {
                if(an[0]!=0){
                    panduan++;
                    cout<<an[0];
                }
                break;
            }
            case 1:
            {
                if(an[1]>0){
                    if(panduan>0)
                        cout<<"+";
                    if(an[1]!=1)
                        cout<<an[1]<<"X";
                    else
                        cout<<"X";
                    panduan++;
                }
                if(an[1]<0){
                    if(an[1]!=-1)
                        cout<<an[1]<<"X";
                    else
                        cout<<"-"<<"X";
                    panduan++;
                }
                break;
            }
            default:
            {
                if(an[i]>0){
                    if(panduan>0)
                        cout<<"+";
                    if(an[i]!=1)
                        cout<<an[i]<<"X^"<<i;
                    else
                        cout<<"X^"<<i;
                    panduan++;
                }
                if(an[i]<0){
                    if(an[i]!=-1)
                        cout<<an[i]<<"X^"<<i;
                    else
                        cout<<"-"<<"X^"<<i;
                    panduan++;
                }
            }
        }
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
int Duoxiangshi::return_number()
{
    return number;
}
Duoxiangshi operator+(const Duoxiangshi& a,const Duoxiangshi& b)
{
    Duoxiangshi duoxiangshi;
    if(a.n>b.n)
    {
        duoxiangshi.n=a.n;
        for(int i=0;i<b.n;i++)
        {
            duoxiangshi.an[i]=a.an[i]+b.an[i];
        }
        for(int j=b.n;j<a.n;j++)
        {
            duoxiangshi.an[j]=a.an[j];
        }
    }
    else
    {
        duoxiangshi.n=b.n;
        for(int i=0;i<a.n;i++)
        {
            duoxiangshi.an[i]=a.an[i]+b.an[i];
        }
        for(int j=a.n;j<b.n;j++)
        {
            duoxiangshi.an[j]=b.an[j];
        }
    }
    return duoxiangshi;
}
Duoxiangshi Duoxiangshi::operator-(const Duoxiangshi& temp)
{
    Duoxiangshi duoxiangshi;
    if((this->n)>temp.n)
    {
        duoxiangshi.n=(this->n);
        for(int i=0;i<temp.n;i++)
        {
            duoxiangshi.an[i]=this->an[i]-temp.an[i];
        }
        for(int j=temp.n;j<this->n;j++)
        {
            duoxiangshi.an[j]=this->an[j];
        }
    }
    else
    {
        duoxiangshi.n=temp.n;
        for(int i=0;i<this->n;i++)
        {
            duoxiangshi.an[i]=this->an[i]-temp.an[i];
        }
        for(int j=this->n;j<temp.n;j++)
        {
            duoxiangshi.an[j]=(-temp.an[j]);
        }
    }
    return duoxiangshi;
}
Duoxiangshi Duoxiangshi::operator*(const Duoxiangshi& temp)
{
    Duoxiangshi duoxiangshi;
    duoxiangshi.n=(this->n)+temp.n;
    for(int i=0;i<duoxiangshi.n;i++)
        duoxiangshi.an[i]=0;
    for(int i=0;i<this->n;i++){
        for(int j=0;j<temp.n;j++){
            duoxiangshi.an[(i+j)]+=((this->an[i])*temp.an[j]);
        }
    }
    return duoxiangshi;
}
Duoxiangshi& Duoxiangshi::operator=(const Duoxiangshi &temp)
{
    this->n=temp.n;
    this->an=new float[n];
    for(int i=0;i<(this->n);i++)
    {
        this->an[i]=temp.an[i];
    }
    return *this;
}
