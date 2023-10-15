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

};

//Now I will inherit the features of the base class into the derived classes.

class SchoolBus: public Vehicle
{

    string school_name;
    int number_holidays;

    public:

    void printname()
    {
        cout<<"halalueah"<<name;
    }
    
};

class Car: public Vehicle   // Derived class car has inherited all the data from the base class Vehicle.
{
    //No member named mileage
    //No member function named calculatemileage
    public:

    int number_airbags;
    int ac_consumption;

    public:

    void printname()
    {
        cout<<name;
    }

    /*void set_mileage(int mileage)
    {
        this->mileage=mileage;
    }

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }

    void calcmileage()
    {
        cout<<mileage;
    }*/

};

class SUV: public Car
{
    public:

    int four_wheel_drive;
};

int main()
{
    Car a;
    SchoolBus b;
    //SUV a;
    //a.mileage=50;     // when vehicle is public
    //a.set_mileage(50); when vehicle is private
    //a.calculatemileage();

    a.name="Suzuki";
    b.name="Toyota";

    a.printname();
    cout<<endl;
    b.printname();
}
