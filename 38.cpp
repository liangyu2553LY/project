#include <iostream>
using namespace std;
class time
{
	public:
		int hour;
		int minute;
		int sec;
		int day;
	void set()
	{
		cin>>hour>>minute>>sec;
    }
		
}t1,t2,t3;


int main()
{
	cout<<sizeof(time); //所占内存空间取决于成员所占空间，与成员函数无关


}
