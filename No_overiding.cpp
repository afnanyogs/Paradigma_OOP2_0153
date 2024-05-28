#include<iostream>
using namespace std;

//class parent
//tambahkan final sesudah nama class
//untuk mencegah adanya overriding
class baseClass
{
public:
	virtual void perkenalkan()
	{
		cout << "Hallo saya Function dari base class";
	}
};
int main()
{
	derivedClass a;
	a.perkenalan();

	return 0;
}