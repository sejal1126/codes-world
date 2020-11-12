
#include <iostream>

using namespace std;

int main() {
string ch,result="";
cin>>ch;
int i=0;
int hash[123]={0};
for(i=0;i<ch.size();i++)
{
	if(hash[ch[i]]==0)
	{
		hash[ch[i]]=1;
		result+=ch[i];
	}
}
cout<<result<<endl;

return 0;
}
