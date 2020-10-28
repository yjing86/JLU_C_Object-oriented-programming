//
//  class.h
//  20190531-第一次上机作业
//
//  Created by 荆煜 on 2019/5/31.
//  Copyright © 2019 jingyu. All rights reserved.
//

#ifndef class_h
#define class_h
using namespace std;
class duoxiangshi{
public:
    void set(int);
    void print(int);
    double calculate(double,int);
private:
    int a;
    int list;
};
int n=1;
duoxiangshi *an=new duoxiangshi[n];
inline void duoxiangshi::set(int x){
    n=x;
    list=n-1;
    cout<<"请输入多项式系数a"<<list<<"=";
    cin>>an[list].a;
}
inline void duoxiangshi::print(int x){
    list=x;
    int printn=0;
    while(printn<=(list-1)){
        cout<<an[printn].a<<"x^"<<(int)printn;
        if(printn!=list)
            cout<<"+";
        printn++;
    }
    cout<<"=";
}
inline double duoxiangshi::calculate(double x,int p){
    double sum=1;
    int i=1;
    while(i<an[n].list){
        sum*=x;
        i++;
    }
    sum*=an[n-1].a;
    return sum;
}


#endif /* class_h */
