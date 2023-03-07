#include "CCar.h"
#include <iostream>
using namespace std;
int CCar::counter = 0;// this is static :
// initialization list for constructors : it is speed ;
// default constructor :it can take initial value :
CCar::CCar(string m , string c , int mo):maker(m),model(mo),color(c)
{
    cout<<"Welcome to my class"<<endl;
    counter++;
     /*
     destructor is a special method that is automatically
       called when an object is created :
       _________________________________________________
      maker  = "Honda";
      model  = 2020;
      color  = "red";
     */
}
// overloading constructors :
CCar::CCar(string m, int mo , string c):maker(m),model(mo),color(c)
{
  counter++;
}
CCar::~CCar()
{
    /* destructor is a special method that is automatically
       called when an object life time is ended:
    */
    counter--;
    cout<<"Good bye"<<endl;
}
void CCar::setMaker(string m)
{
    maker = m;
}
string CCar::getMaker()
{
    return maker;
}
void CCar::setModel(int mo)
{
    model = mo;
}
int CCar::getModel()
{
    return model;
}
void CCar::setColor(string c)
{
    color = c;
}
string CCar::getColor()
{
    return color;
}

