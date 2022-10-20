#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public :
    void get_a(int n)
    {
        a=n;
    }
};
class B
{
protected:
    int b;
public :
    void get_b(int n)
    {
        b=n;
    }
};
class C :public A,public B
{
public:
    void display()
    {
        cout<<"The value of a is "<<a<<"\t\n";
                cout<<"The value of b is "<<b<<"\t\n";
                        cout<<"The sum is "<<a+b<<"\t\n";


    }
};
int main()
{
    C c;
    c.get_a(10);
    c.get_b(30);
    c.display();
    return 0;
}

