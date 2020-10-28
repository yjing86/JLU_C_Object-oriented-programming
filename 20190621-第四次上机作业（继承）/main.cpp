//
//  main.cpp
//  20190615-第四次上机作业
//
//  Created by 荆煜 on 2019/6/14.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
#include"company.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Chip_public chip_public;
    chip_public.test();
    cout<<endl<<"用户功能测试："<<endl;
    chip_public.menu();
    chip_public.video();
    cout<<"测试结束"<<endl;
    cout<<endl;
    Chip_protected chip_protected;
    chip_protected.test();
    cout<<endl<<"用户功能测试："<<endl;
    chip_protected.menu();
//    chip_protected.video();
    cout<<"测试结束"<<endl;
    cout<<endl;
    Chip_private chip_private;
    chip_private.test();
    cout<<endl<<"用户功能测试："<<endl;
    chip_private.menu();
//    chip_private.video();
    cout<<"测试结束"<<endl<<endl<<"覆盖测试："<<endl;
    Override_test override_test;
    chip_public.video();
    override_test.video();
    cout<<endl<<endl<<"多态测试："<<endl;
    virtual_test *vt[3];
    vt[0]=new virtual_test_camera;
    vt[1]=new virtual_test_camera_canon;
    vt[2]=new virtual_test_camera_sony;
    for(int i=0;i<3;i++){
        vt[i]->name();
    }
    return 0;
}
