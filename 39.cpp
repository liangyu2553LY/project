#include <iostream>
using namespace std;
class time
{
	public:
		int hour;
		int minute;
		
}t,*p;
int main()
{
	time &t2=t;
	p=&t;
	cout<<t2.hour;
	system("pause");
}
