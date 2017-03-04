#include<iostream>
#include<cstdlib>
using namespace std;

class IntArray{
    int sz,*Arr;
    public: IntArray(int s){
                sz=s;
                Arr=new int[sz];
            }
            int operator[](int x)const;
            int& operator[](int x);
            friend ostream& operator<<(ostream &os,const IntArray &ia);
            friend istream& operator>>(istream &is,IntArray &ia); 
    
};

int IntArray::operator[](int x)const
{
    cout<<"\nVersion 1"<<endl;
    if(x<0||x>=32)
    {
        cout<<"Out of range"<<endl;
        exit(0);
    }
    else
        return Arr[x];
}

int& IntArray::operator[](int x)
{
    cout<<"\nVersion 2"<<endl;
    if(x<0||x>=32)
    {
        cout<<"Out of range"<<endl;
        exit(0);
    }
    else
        return Arr[x];
}

ostream& operator<<(ostream& os,const IntArray& ia)
{
    cout<<"\nArray contents are:"<<endl;
    for(int j=0;j<ia.sz;j++)
    {
        
    }
}





















