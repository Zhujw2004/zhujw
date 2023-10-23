#include <iostream>
using namespace std;
class A{
	public:
string Remove(string s,int n)
{
	int len=s.size();
	if(len==0)
	{
		return "";
	}
	else if(len==n)
	{
		return s;
	}
	else if(len<n)
	{
	n=n%len;
	string res;
	res+=s.substr(n,len-n);
	res+=s.substr(0,n);
	return res;
	}
	else if(len>n)
	{
		string res;
		res+=s.substr(n,len-n);
		res+=s.substr(0,n);
		return res;
	}
	
}
};

int main(){
	string s;
	string goal;
	int n;
	string res;
	A a;
cout<<"ÇëÊäÈës×Ö·û´®"<<endl;
cin>>s;
cout<<"ÇëÊäÈë·­×ª´ÎÊý"<<endl;
cin>>n;
cout<<"·­×ªn´ÎºóµÄs×Ö·û´®:";
cout<<a.Remove(s,n)<<endl;
cout<<"ÇëÊäÈëgoal×Ö·û´®"<<endl;
cin>>goal;
if(goal.compare(a.Remove(s,n))==0){
    	cout<<"ture"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}
