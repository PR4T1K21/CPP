#include<iostream>
using namespace std;
class A
{
	protected:
		int n;
};
class child:public A
{
	public:
		int cube()
		{
			cout<<"enter the number :"<<endl;
			cin>>n;


				cout<<" cube of "<<n<<" is "<<"="<<(n*n*n)<<endl;


return 0;
		}
};
int main()
{
    child obj;
    obj.cube();
return 0;
}
