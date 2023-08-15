#include <iostream>
using namespace std;
class time
{
	public:
		int hour;
		int minute;
		int sec;
};

int main()
{
	void set_time(time*);
	void show_time(time*);
	time t1;
	set_time(&t1);
	show_time(&t1);
	

	
}
void set_time(time*t)
{
	cin>>t->minute;
}




void show_time(time*t)
{
	cout<<t->minute;
}

