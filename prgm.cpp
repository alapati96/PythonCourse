#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
vector<string> ss;
ss.push_back("bakj");
ss.push_back("call");
ss.push_back("hello");
ss.push_back("grey");
ss.push_back("callme");
ss.push_back("callok");
ss.push_back("callon");
ss.push_back("zzzzzz");
ss.push_back("cbjkoi");

cout<<"My dictionary contains:"<<endl<<endl;

int a;
a=ss.size();
int d[a];
for(int i=0;i<a;i++)
d[i]=ss[i].size();

for(int i=0;i<a;i++)
cout<<ss[i]<<endl;

cout<<endl;
int w[a][100],z[a][100];
for(int i=0;i<a;i++)
{
	for(int j=0;j<d[i];j++)
		w[i][j]=ss[i][j];
}

for(int i=0;i<a;i++)
{
	for(int j=0;j<d[i];j++)
	{
		if(w[i][j]>=97&&w[i][j]<=99)
		z[i][j]=2;
		
		else if(w[i][j]>=100&&w[i][j]<=102)
		z[i][j]=3;

		else if(w[i][j]>=103&&w[i][j]<=105)
		z[i][j]=4;
		
		else if(w[i][j]>=106&&w[i][j]<=108)
		z[i][j]=5;
		
		else if(w[i][j]>=109&&w[i][j]<=111)
		z[i][j]=6;
		
		else if(w[i][j]>=112&&w[i][j]<=115)
		z[i][j]=7;
		
		else if(w[i][j]>=116&&w[i][j]<=118)
		z[i][j]=8;
		
		else 
		z[i][j]=9;
	}
}

cout<<"enter a number"<<endl;
cout<<"1800-";
int e,f,f1;

cin>>e;
cout<<endl;
f1=e;

while(e!=0)
{
	e=e/10;
	f++;
}

int u[a]={0};
for(int i=0;i<a;i++)
{
	for(int j=0;j<d[i];j++)
		u[i]=(u[i]*10)+z[i][j];
}

cout<<"possibilities are:"<<endl;
for(int i=0;i<a;i++)
{
	if(u[i]==f1)
	cout<<ss[i]<<endl;
}
}
