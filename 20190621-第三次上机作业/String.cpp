//
//  String.cpp
//  20190614-第三次上机作业
//
//  Created by 荆煜 on 2019/6/20.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include "String.hpp"
using namespace std;
String::String()
{
    len=0;
    str=new char[0];
}
String::~String()
{
    delete [] str;
}
String::String(const char* strlit)
{
    int i = 0;
    while(strlit[i]!='\0')
    {
        i++;
    }
    len=i;
    str=new char[len+1];
    for(int j=0;j<i;++j)
    {
        str[j]=strlit[j];
    }
}
String::String(const String& strbig)
{
    len=strbig.len;
    str=new char[len+1];
    for(int j=0;j<len;++j)
    {
        str[j]=strbig.str[j];
    }
}
String String::operator =(const char* ch)
{
    int i=0;
    while(ch[i]!='\0')
    {
        i++;
    }
    delete [] this->str;
    this->len=i;
    this->str=new char[len+1];
    for(int j=0;j<i;++j)
    {
        this->str[j]=ch[j];
    }
    return *this;
}
String String::operator =(const String& str1)
{
    this->len=str1.len;
    delete []this->str;
    str=new char[len+1];
    for(int i=0;i<len;++i)
    {
        this->str[i]=str1.str[i];
    }
    return *this;
}
int String::length()
{
    return this->len;
}
void String::print()
{
    for(int i=0;i<this->len;++i)
    {
        cout<<this->str[i];
    }
    cout<<endl;
}
String String::cat(const String& s)
{
    String t;
    t.len=this->len+s.len;
    t.str=new char[t.len+1];
    for(int i=0;i<this->len;++i)
    {
        t.str[i]=this->str[i];
    }
    for(int i=this->len;i<t.len;++i)
    {
        t.str[i]=s.str[i-this->len];
    }
    return t;
}
