#include<bits/stdc++.h>
using namespace std;
class myclass
{
	//By default, all members of a class are private if you don't specify an access specifier:
	public:
		int x=10;
	private:
		int y=20;

}
int main()
{
	myclass obj;
	cout<<obj.x<<endl;
	cout<<obj.y<<endl;
	return 0;
}