#include <iostream>
using namespace std;
class student
{
	public :
		string m_name;
		int m_number;
		void setname(string name)
		{
			m_name=name;
		}
		void setnumber(int number)
		{
			m_number=number;
		}
		

		void showname()
		{
			cout<<m_name<<m_number;
		}
};
int main()
{
	student c1;
   c1.setname("ÕÅÉ½");
	c1.setnumber(1);
	c1.showname();



}




