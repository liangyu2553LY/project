#include <iostream>
using namespace std;
class arry_max
{
	private:
		int arry[5];
		int max;
	public:
		void set_max();
		void get_max();
		void show_max();
		
};
void arry_max::set_max()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		cin>>arry[i];
	}
}
void arry_max::get_max()
{
	int i=0;
	for(i=0;i<5;i++)
	{
	if(arry[i]>arry[0])
	  {
		     max=arry[i];

	  }
		
	}

}
void arry_max::show_max()
{
	cout<<max<<endl;
}
int main()
{
	arry_max Max;
	Max.set_max();
	Max.get_max();
	Max.show_max();
}




