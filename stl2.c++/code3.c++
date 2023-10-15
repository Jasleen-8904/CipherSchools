#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> hash;

    hash["rohit"]=1;
    hash["programming"]=2;
    hash["reddy"]=3;

    cout<<"The value of rohit in the hash table is "<<hash["rohit"];
    cout<<"The value of rohit in the hash table is "<<hash["programming"];
    cout<<"The value of rohit in the hash table is "<<hash["cat"];

    for(auto j=hash.begin();j!=hash.end();j++)
    {
        cout<<"The key will be "<<j->first<<"The value in the key will be "<<j->second<<endl;
    }

}