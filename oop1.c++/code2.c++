#include<iostream>
using namespace std;

//The vehicle is a base class.

class Vehicle
{
    public:

    int number_tyres;
    string name;
    int capacity;
    int mileage;

    public:

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }

};

//Now I will inherit the features of the base class into the derived classes.

class SchoolBus: public Vehicle
{

    string school_name;
    int number_holidays;

    public:

    void printnameofschool()
    {
        cout<<"The name of the school is "<<name;
    }
    
};

class Car: public Vehicle   // Derived class car has inherited all the data from the base class Vehicle.
{
    //No member named mileage
    //No member function named calculatemileage
    private:

    int number_airbags;
    int ac_consumption;

};

int main()
{
    Car a;
    a.mileage=50;
    a.calculatemileage();
}