#include <iostream>
#include <string>
using namespace std;
class student
{
	public:  //���캯��//�ַ�  //�ַ���
		student(int n,char s,string nam);
//        ~student()
//		{
//			cout<<"student��������������"<<endl;
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
	cout<<"student�Ĺ��캯������"<<endl;

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
