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
	void set_time(time&,int hour=0,int minute=0,int sec=0);
	void show_time(time&);
	time t1;
	set_time(t1,12,23,21);
	show_time(t1);
	
	
}
void set_time(time&t,int hour,int minute,int sec)
{
	t.hour=hour;
	t.minute=minute;
	t.sec=sec;
	
}
void show_time(time&t)
{
	cout<<t.hour<<endl;
	cout<<t.minute<<endl;
	cout<<t.sec<<endl;
}

















