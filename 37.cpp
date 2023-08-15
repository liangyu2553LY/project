#include <iostream>
using namespace std;
class student
{
	public:
    inline void display();
	private:
		int num;
		char name[20];
		char sex;
		
	
}stu1;
inline void student::display(){
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
}
int main()
{
	 stu1.display();
}
