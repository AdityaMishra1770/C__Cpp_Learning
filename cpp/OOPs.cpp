#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//  inheritance of class
class human
{
public:
    string name;
    int age;
    void set_name(string n)
    {
        this->name = n;
    }
    string get_name()
    {
        return this->name;
    }
    void set_age(int a)
    {
        if (a > 0)
            this->age = a;
        else
            cout << "Invalid input! Age must be greater than zero." << endl;
    }
    int get_age()
    {
        return this->age;
    }
};

class male : public human
{
public:
    string color;
    void set_color(string co)
    {
        this->color = co;
    }
    void show_info()
    {
        cout << "Name: " << get_name() << endl;
        cout << "Age: " << get_age() << endl;
        cout << "Color: " << color << endl;
    }
};

class sizeone
{
public:
    int n;
    char *name;
    sizeone(int n)
    {
        this->n = n;
        cout << "this -> " << this << endl;
        name = new char[100];
    }

    //  DEEP copy without below it is shallow copy
    sizeone(const sizeone &obj)
    {
        cout << "Copy Constructor Called" << endl;
        this->n = obj.n;
        char *ch = new char[strlen(obj.name) + 1];
        strcpy(ch, obj.name);
        (*this).name = ch;
    }
    void setName(char str[])
    {
        strcpy(this->name, str);
    }
    void print()
    {
        cout << "sizeone name : " << name << endl;
        cout << "Health is : " << n << endl;
    }
    ~sizeone()
    {
        cout << "Destructor called for object of class sizeone." << endl;
    }
};
class Hero
{
private:
    string stratergy;

public:
    int health;
    static int timeToComplete; // static member
    // Getter and setter to return private
    string getstrategy() { return stratergy; }
    void setStrategy(string s) { stratergy = s; }
    void print()
    {
        cout << "Hero Strategy : " << stratergy << endl;
        cout << "Health is : " << health << endl;
    }

    // normal constructor
    Hero()
    {
        cout << "Constructor called\n";
    }
    //  parameterised constructor
    Hero(string stratergy, int health)
    {
        cout << "Hello User" << endl;
        this->stratergy = stratergy;
        this->health = health;
    }
    // copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy Constructor Called\n";
        this->stratergy = temp.stratergy;
        this->health = temp.health;
    }

    static int random()
    {
        return timeToComplete;
    }
};

// int Hero::timeToComplete = 1000;
int main(int argc, char const *argv[])
{
    male h1;
    h1.age = 89;
    h1.set_name("John");
    h1.set_color("White");
    h1.show_info();

        /* static function
        cout << Hero::random << endl;
        */

        /* static keyword
        cout<<Hero::timeToComplete<<endl;
        Hero h1;
        cout<<h1.timeToComplete<<endl;
        */

        // Object Creation using Parameterised Constructor
        // sizeone hercules(200);
        // hercules.setName("Above ranger");
        // hercules.print();
        // sizeone h2(hercules);
        // h2.print();
        // hercules.setName("RAnge");
        // hercules.print();
        // h2.print(); // shallow copy by default constructor it is accessing same memory

        // Hero ko("Martian", 100);
        // Hero ho;
        // ko.print();
        // ho.print();
        // ho = ko;
        // ko.print();
        // ho.print();

        // Hero unicorn("Tackle", 75); // constructor called whenever aobject is called
        // unicorn.print();
        // Hero dragon(unicorn); // copied constructor from unicorn to dragon
        // dragon.print();
        // sizeone great(50);
        // cout << "Address of great = " << &great << endl;

        // cout << "The size of empty class sizeone is of size = " << sizeof(sizeone) << endl;
        // // class hero properties accessed through dot operator
        // Hero John;
        // John.health = 100;
        // cout << " health of john is = " << John.health << endl;
        // //  getting private properties through getter and setter
        // cout << "John's strategy is = " << John.getstrategy() << endl;
        // John.setStrategy("Attack");
        // cout << "John's strategy is = " << John.getstrategy() << endl;
        // cout << "The size of empty class sizeone is of size = " << sizeof(John) << endl;

        // Hero *jam = new Hero;
        // jam->health = 50;
        // cout << "Health of Jamie = " << jam->health << endl;
        // jam->setStrategy("Defense and attack");
        // cout << "Jamie's Strategy = " << jam->getstrategy() << endl;

        return 0;
}