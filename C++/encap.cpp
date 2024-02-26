#include<bits/stdc++.h>
using namespace std;
class myclass
{
	private:
		int age;
	public:
		void setage(int a)
		{
			age=a;
		}
		int getage()
		{
			return age;
		}
};
int main()
{
	myclass obj;
	obj.setage(12);
	cout<<"Age:"<<obj.getage()<<endl;
	return 0;
}