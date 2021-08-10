# file-handlingg
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream newFile("C:\\Users\\Hp\\Desktop\\CPP.txt");
	cout<<"File Created...";
	newFile<<"File handling created....";
	newFile.close();
	return 0;
	
}
