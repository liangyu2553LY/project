#include <iostream>
using namespace std;
class student
{
	public:
		student(int n,char s,char nam):num(n),sex(s)
		{
		   strcpy(name[20],nam);
		}
		void show()
		{
			 cout<<"ѧ��"<<num<<"�Ա�"<<sex<<"����"<<name[20];
		}
   private:
   	int num;
   	char sex;
   	char name[20];
	
} ;
int main()
{
	 student stu1(2021,"��","����");
	 stu1.show();
}
