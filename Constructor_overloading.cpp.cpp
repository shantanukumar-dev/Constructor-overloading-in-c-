           //SUITABLE_EXAMPLE OF CONSTRUCTOR-OVERLOADING
#include <iostream>
#include <conio.h>
using namespace std;
class code //CREATE A CLASS
{
    //PRIVATE DATA MEMBERS
private:
    float data1;
    int data2;
    char fav_character;

public:
     //PUBLIC MEMBER FUNCTIONS
    code(float a, int b);//SPECIFIC MEMBER FUNCTION(CONSTRUCTOR)
    code(int x, float y);
    code(int i, float j, char a); 
    void print1();
    void print2();
    void print3();
};
code::code(float a, int b)//DEFINITION OF CONSTRUCTOR OUTSIDE THE CLASS
{
    data1 = a;
    data2 = b;
}
code::code(int x, float y)//DEFINITION OF CONSTRUCTOR OUTSIDE THE CLASS
{
    data2 = x;
    data1 = y;
}
code::code(int i, float j, char a)//DEFINITION OF CONSTRUCTOR OUTSIDE THE CLASS
{
    data2 = i;
    data1 = j;
    fav_character = a;
}
void code::print1()//DEFINITION OF MEMBER FUNCTION OUTSIDE THE CLASS
{
    cout << "The value of the data1 is " << data1 << endl;
    cout << "The value of the data2 is " << data2 << endl;
}
void code::print2()//DEFINITION OF MEMBER FUNCTION OUTSIDE THE CLASS
{
    cout << "The value of the data1 is " << data2 << endl;
    cout << "The value of the data2 is " << data1 << endl;
}
void code::print3()//DEFINITION OF MEMBER FUNCTION OUTSIDE THE CLASS
{
    cout << "The value of the data1 is " << data2 << endl;
    cout << "The value of the data2 is " << data1 << endl;
    cout << "Your favourite character is " << fav_character << endl;
}
int main()
{ 
    //ALL CONSTRUCTOR CALL BY EXPLICITLY BY USING THE RESPECTIVE OBJECT
    code obj1 = code(10.3, 200);
    obj1.print1();
    code obj2 = code(12, 23.5);
    obj2.print2();
    code obj3 = code(15, 45.67, 's');
    obj3.print3();
    getch();
    return 0;
}