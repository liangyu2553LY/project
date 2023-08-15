#include <iostream>
#include <string>
using namespace std;
class student
{
	public:  //构造函数//字符  //字符串
		student(int n,char s,string nam);
//        ~student()
//		{
//			cout<<"student的析构函数调用"<<endl;
//		}
		void display();
	private:
		int num;
		char sex;
		string name[20];
};
student::student(int n,char s,string nam)
{
	num=n;
	sex=s;
	name[20]=nam;
	cout<<"student的构造函数调用"<<endl;

}
void student::display()
{
	cout<<"num:"<<num<<endl;
	cout<<sex<<endl;
	cout<<name<<endl;
}
void test01()
{
	student stu1(1000,'f',"zuzhihao");
	stu1.display();
}

int main()
{
	test01();
	return 0;

}
