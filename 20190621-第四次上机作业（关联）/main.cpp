//
//  main.cpp
//  20190621-第四次上机作业
//
//  Created by 荆煜 on 2019/6/21.
//  Copyright © 2019 jingyu. All rights reserved.
//

#include <iostream>
using namespace std;
class camera{
public:
    void cinematography();
    void setting_of_picture_resolution();
    void coding_algorithm();
};

void camera::cinematography()
{
    cout<<"Begin shooting."<<endl;
}

void camera::setting_of_picture_resolution()
{
    cout<<"Successfully set."<<endl;
}

void camera::coding_algorithm()
{
    cout<<"Successfully code."<<endl;
}

class chip
{
public:
    void menu();
    void AutoShoot();
    void SpeedSensor();
    void TheSourceCode();
    friend class camera;                //在chip类内将camera类声明为友元，即可使用camera类里的函数
};

void chip::AutoShoot()
{
    cout<<"Autoshoot is good."<<endl;
}

void chip::menu()
{
    cout<<"There is menu:"<<endl;
}

void chip::SpeedSensor()
{
    cout<<"Speed sensor is ready."<<endl;
}

void chip::TheSourceCode()
{
    cout<<"There is the source code."<<endl;
}

class AutomobileDateRecorder1{
private:
    camera c1;
    chip c2;             //camera类和chip类在AutomobileDateRecord1类中是组合关系
public:
    void cinematography()
    {
        c1.cinematography();
    }
    void menu()
    {
        c2.menu();
        {
            c1.cinematography();
            c1.setting_of_picture_resolution();
        }
    }
};

class AutomobileDataRecorder2{
private:
    camera c1;
    chip c2;             //camera类和chip类在AutomobileDateRecord1类中是组合关系
public:
    void menu()
    {
        c2.menu();
        {
            c1.cinematography();
            c1.setting_of_picture_resolution();
        }
    }
};



class AutomobileDataRecorder3{
private:
    camera c1;
    chip c2;             //camera类和chip类在AutomobileDateRecord1类中是组合关系
public:
    void menu()
    {
        c2.menu();
        {
            c1.cinematography();
            c1.setting_of_picture_resolution();
        }
    }
};


int main()
{
    AutomobileDateRecorder1 a1;
    AutomobileDataRecorder2 a2;
    AutomobileDataRecorder3 a3;
    a1.cinematography();
    a1.menu();
    a2.menu();
    a3.menu();
}
