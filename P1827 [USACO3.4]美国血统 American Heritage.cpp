//By: Luogu@wangdemao(308854)
#include <iostream>
#include <string>

using namespace std;

string zhong,qian;

void digui(string zhongt,string qiant)
{
	if(qiant.size()==0)
		return ;
		
	char root=qiant[0];
	
	int s=zhongt.find(root);
	
	string zhongtt=zhongt.substr(0,s);
	string qiantt=qiant.substr(1,s);
	string zhongttt=zhongt.substr(s+1);
	string qianttt=qiant.substr(s+1);
	
	digui(zhongtt,qiantt);
	digui(zhongttt,qianttt);
	
	cout<<root;
}

int main()
{
	cin>>zhong>>qian;
	
	digui(zhong,qian);
	return 0;
}

