#ifndef CCAR_H
#define CCAR_H
#include <string>
using namespace std;
class CCar
{
     private:
        string maker;
        int model;
        string color;
        static int counter;// this is belong the class not any abject:
    public:
        void setMaker(string m);
        string getMaker();
        void setModel(int mo);
        int getModel();
        void setColor(string c);
        string getColor();
        int getCarcount();

        CCar(string maker , string color , int model);
 p        // overloading constructor :
        CCar(string m,int mo,string c);
        ~CCar();
};
#endif // CCAR_H
