#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	string text;
	ifstream myfile("file1.txt");	
	while(getline(myfile,text))
	{
		cout<<text<<endl;
	}
	myfile.close();
	return 0;
}