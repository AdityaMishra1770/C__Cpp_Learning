#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class operate // polymorphism
{
public:
    int a;
    void operator+(operate &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "value 1 = " << value1 << " value 2 = " << value2 << endl;
        cout << "The sum is :" << value1 + value2 << endl;
    }
    void polyMorph()
    {
        cout << "This is the base class method." << endl;
    }
    // Overlaoading the braces
    void operator()()
    {
        cout << "Brackets called : Mera naam hai bracket mera object ke pass value hai " << this->a << " " << endl;
    }
};
class inherited
{
public:
    void polyMorph()
    {
        cout << "This is the derived class method.\n";
    }
};
int main(int argc, char const *argv[])
{
    operate object1, object2;
    object1.a = 46;
    object2.a = 78;
    object1 + object2;operate o;
    inherited j;
    j.polyMorph(); // Method overridnig
    o.polyMorph();
    return 0;
}