#include<iostream>
using namespace std;
class measure
{
        public:
                void shape(int r);
                void shape(int l,int b);
                void shape(float t,int d,int e);
                void shape(long a);
};
void measure::shape(int r)
{
        cout<<"area of the circle is "<<3.14*r*r;
}
void measure::shape(int l,int b)
{
        cout<<"area of the rectangle is"<<l*b;
}
void measure::shape(float t,int d,int e)
{
        cout<<"area of the triangle is"<<t*d*e;
}
void measure::shape(long a)
{
        cout<<"area of the square is"<<a*a;
}
int main()
{
        int r,d,e,l,b;
        float t,c,h;
        long a;
        int ch;
        double j,f;
        long int g;
        measure obj;
        cout<<"\tCALCULATION OF AREA AND VOLUME";
        cout<<"\n\n1. area of circle";
        cout<<"\n2. area of rectangle";
        cout<<"\n3. area of triangle";
        cout<<"\n4. area of square";
        cout<<"\n\tEnter your choice ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                        cout<<"enter the value of radius of the circle \n";
                        cin>>r;
                        obj.shape(r);
                        break;
                case 2:
                        cout<<"enter the sides of rectangle \n";
                        cin>>l>>b;
                        obj.shape(l,b);
                        break;
                case 3:
                        cout<<"enter the sides of triangle \n";
                        cin>>d>>e;
                        obj.shape(0.5,d,e);
                        break;
                case 4:
                        cout<<"enter the sides of square";
                        cin>>a;
                        obj.shape(a);
                        break;
                default:
                        cout<<"\nThe choice entered is a wrong choice";
        }
        return 0;
}
