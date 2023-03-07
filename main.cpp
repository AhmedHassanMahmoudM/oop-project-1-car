#include <iostream>
#include <CCar.h>

using namespace std;
int main()
{

    CCar c1("BMW","white",2023);
    cout<<"this car made by  :"<<c1.getMaker()<<endl;
    cout<<"this car model is :"<<c1.getModel()<<endl;
    cout<<"this car color is :"<<c1.getColor()<<endl;

cout<<endl;

    CCar c2("Honda","red",2020);
    cout<<"this car made by  :"<<c2.getMaker()<<endl;
    cout<<"this car model is :"<<c2.getModel()<<endl;
    cout<<"this car color is :"<<c2.getColor()<<endl;


    /*
    CCar c1;
    cout<<"counter"<< c1.getCarcount()<<endl;

    CCar c2;
    cout<<"counter"<< c2.getCarcount()<<endl;

    CCar c3;
    cout<<"counter"<< c3.getCarcount()<<endl;
    */
    return 0;
}
