#include<iostream>
using namespace std;

class Coordinate
{
    public:

    float a;
    float b;

    public:

    Coordinate operator+(Coordinate const & obj)
    {
        Coordinate z;
        z.a=this->a+obj.a;
        z.b=this->b+obj.b;

        return z;
    }

    void squareofdistancefromcoordinate(float a)
    {
        float dist;
        dist=(this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }

    void squareofdistancefromcoordinate(float a,float b)
    {
        float dist;
        dist=(this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }

    void squareofdistancefromcoordinate(float a,float b,float c)
    {
        float dist;
        dist=(this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }
};


int main()
{
    Coordinate x;
    x.a=3;
    x.b=4;

    Coordinate y;
    y.a=5;
    y.b=6;

    Coordinate z;
    z=x+y;

    cout<<"the coordinates after addition are "<<z.a<<" "<<z.b;

    //x.squareofdistancefromcoordinate(0,0);
    return 0;
}