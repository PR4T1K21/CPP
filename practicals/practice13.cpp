#include <iostream>
using namespace std ;
class Shape
{

 public:double a,b;
 void get_data()
 {
     cin >>a>>b;
 }
 virtual void display_area()=0;
};
class Triangle : public Shape
{
    public : void display_area()
    {
      cout<<"Area of Triangle is "<<0.5*a*b<<"\n";
    }
};
class Rectangle : public Shape
{
    public : void display_area()
    {
      cout<<"Area of Rectangle is "<<a*b<<"\n";
    }
};
int main ()
{
    Triangle t;
    Shape *st =&t;
    cout<<"ENTER BASE AND HEIGHT\n";
    st -> get_data();
    st -> display_area();
    Rectangle r;
    Shape *sr =&r;
    cout<<"ENTER BASE AND HEIGHT\n";
    sr -> get_data();
    sr -> display_area();
    return 0;
}
