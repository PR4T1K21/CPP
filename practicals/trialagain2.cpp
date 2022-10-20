#include<iostream>
#include<stdio.h>

using namespace std;

class time
{
private:
int hr, min, sec;
public:
time()
{ hr = min = sec =0;}
friend ostream & operator << (ostream &out, const time &c);
friend istream & operator >> (istream &in, time &c);
friend bool operator==(time &t1, time &t2);
};
istream & operator >> (istream &in, time &c)
{
cout << "Enter hour ";
in >> c.hr;
cout<<"Enter minutes";
in >> c.min;
cout <<"Enter seconds";
in >> c.sec;

return in;

}
ostream & operator << (ostream &out, const time &c)
{
out << c.hr;
out << c.min;
out << c.sec;


return out;
}
bool operator== (time &t1, time &t2)
{
return ( t1.hr == t2.hr  );
}
int main()
{
time t1, t2;
cin >> t1;
cout << "The first time is ";
cout << t1;
cout << endl;
cin >> t2;
cout << "The second time is ";
cout << t2;
if(t1 == t2)
{
cout << "Both the time values are equal";
}
else
{
cout << "Both the time values are not equal";
}
return 0;
}

