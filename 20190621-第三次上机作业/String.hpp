//
//  String.hpp
//  20190614-第三次上机作业
//
//  Created by 荆煜 on 2019/6/20.
//  Copyright © 2019 jingyu. All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <stdio.h>
#include <iostream>
class String
{
private:
    char* str;
    int len;
public:
    String ();
    ~String();
    String (const char*);
    String (const String&);
    String operator =(const char *);
    String operator =(const String&);
    int length();
    void print();
    String cat(const String& s);
};
#endif /* String_hpp */
