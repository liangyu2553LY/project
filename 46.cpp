#include <iostream>
using namespace std;
class box
{
	private:
		int height;
		int wide;
		int length;
		public:
			box(int, int,int );//构造函数声明
			int get_s();
};
box::box(int h,int w,int l):height(h),wide(w),length(l){}      //构造函数初始化
int box::get_s()
{
	return(height*wide*length);
}
int main()
{
	box box1(10,20,30);
	cout<<"体积为"<<box1.get_s();
	
}





