#include <iostream>
using namespace std;
class time
{
	public:
		time(int,int,int);
		int hour;
		int minute;
		int sec;
		void get_time();
		
};
time::time(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}
void time::get_time()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

int main()
{
	time t1(10,20,30);
	time t3(20,30,40);
	//ָ���ó�Ա��ָ��
	int *p1=&t1.hour;
	cout<<*p1<<endl;
	//
	t1.get_time();
	time *t2=&t1;
	t2->get_time();
	//(3)    ����ָ���ó�Ա������ָ�����
	void (time::*p3)();
	p3=&time::get_time;  //��ĳ�Ա����������Ӧд�ɶ���ĳ�Ա������
	(t3.*p3)();
	
	
	
	
	
	
	
	
}
