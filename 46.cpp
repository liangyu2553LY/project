#include <iostream>
using namespace std;
class box
{
	private:
		int height;
		int wide;
		int length;
		public:
			box(int, int,int );//���캯������
			int get_s();
};
box::box(int h,int w,int l):height(h),wide(w),length(l){}      //���캯����ʼ��
int box::get_s()
{
	return(height*wide*length);
}
int main()
{
	box box1(10,20,30);
	cout<<"���Ϊ"<<box1.get_s();
	
}





