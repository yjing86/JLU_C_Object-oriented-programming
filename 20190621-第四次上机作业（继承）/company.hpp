//
//  company.hpp
//  20190615-第四次上机作业
//
//  Created by 荆煜 on 2019/6/20.
//  Copyright © 2019 jingyu. All rights reserved.
//

#ifndef company_hpp
#define company_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class virtual_test{
public:
    virtual void name()=0;
};
class virtual_test_camera:public virtual_test{
public:
    void name(){
        cout<<"我是相机"<<endl;
    }
};
class virtual_test_camera_sony:public virtual_test_camera{
public:
    void name(){
        cout<<"我是索尼相机"<<endl;
    }
};
class virtual_test_camera_canon:public virtual_test_camera{
public:
    void name(){
        cout<<"我是佳能相机"<<endl;
    }
};
class Camera{
    void algorithmo(){
        cout<<"算法已展示"<<endl;
    }
protected:
    void photo_quality_set(){
        cout<<"图像质量设置功能正常"<<endl;
    }
    void data(){
        cout<<"可展示重要信息"<<endl;
    }
public:
    Camera(){
        cout<<"Camera已构造"<<endl;
    }
    ~Camera(){
        cout<<"Camera已析构"<<endl;
    }
    void video(){
        cout<<"摄像功能正常"<<endl;
    }
};
class Chip_public:public Camera{
public:
    Chip_public(){
        cout<<"Chip_public已构造"<<endl;

    }
    ~Chip_public(){
        cout<<"Chip_public已析构"<<endl;
        
    }
    void menu(){
        cout<<"已打开菜单"<<endl;
    }
    void test(){
        cout<<endl<<"芯片功能测试："<<endl;
        photo_quality_set();
        video();
        data();
        cout<<"测试结束"<<endl;
    }
};
class Chip_protected:protected Camera{
public:
    Chip_protected(){
        cout<<"Chip_protected已构造"<<endl;
    }
    ~Chip_protected(){
        cout<<"Chip_protected已析构"<<endl;
    }
    void menu(){
        cout<<"已打开菜单"<<endl;
    }
    void test(){
        cout<<endl<<"芯片功能测试："<<endl;
        photo_quality_set();
        video();
        data();
        cout<<"测试结束"<<endl;
    }
};
class Chip_private:private Camera{
public:
    Chip_private(){
        cout<<"Chip_private已构造"<<endl;
    }
    ~Chip_private(){
        cout<<"Chip_private已析构"<<endl;
    }
    void menu(){
        cout<<"已打开菜单"<<endl;
    }
    void test(){
        cout<<endl<<"芯片功能测试："<<endl;
        photo_quality_set();
        video();
        data();
        cout<<"测试结束"<<endl;
    }
};
class Override_test:public Chip_public{
public:
    void video(){
        cout<<"已优化摄像功能"<<endl;
    }
};
#endif /* company_hpp */
