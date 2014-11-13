/* 
 * File:   main.cpp
 * Author: R135291Y
 *
 * Created on November 11, 2014, 10:56 AM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

/*
 * 
 */
class Students
{
    
    string name;
    float fees;
    int mark;
    int reseat;
public:
    Students(){};
    void setName(string thisname){name=thisname;}
    void setFees(float thisfees){fees=thisfees;}
    string GetName(){return name;}
    float GetFees(){return fees;}
    float operator+(Students t);
};

float Students::operator +(Students t)
{
    float tfees;
    tfees=fees+t.fees;
    return tfees;
}
int main ()
{
    float tfees;
    Students maker,purple;
    maker.setName("maker");
    maker.setFees(30.54);
    purple.setName("purple");
    purple.setFees(70.34);
    tfees=maker+purple;
    cout<<"Total fees paid is:"<<tfees<<endl;
    
    return 0;
}

    
