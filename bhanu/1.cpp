#include<iostream>
#include<Cstring>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the main string"<<endl;
	cin>>n;
	char c[n];
	cout<<"enter the main string"<<endl;
	for(int i=0;i<n;i++)
	cin>>c[i];
	
	int d[n];
	for(int i=0;i<n;i++)
	d[i]=c[i];

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(d[i]>d[j])
			{
				int temp;
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}

	int n1;
	cout<<"enter size of the string to be searched"<<endl;
	cin>>n1;
	
	if(n1==n)
	{
		char e[10];
			cout<<"enter string to be searched"<<endl;
			for(int i=0;i<n1;i++)
			cin>>e[i];
			
			int f[n1];
		
			for(int i=0;i<n1;i++)
			f[i]=e[i];
		
			for(int i=0;i<n1;i++)
			{
				for(int j=i+1;j<n1;j++)
				{
					if(f[i]>f[j])
					{
						int temp;
						temp=f[i];
						f[i]=f[j];
						f[j]=temp;
					}
				}
			}
		
		int c=0;
		
			for(int i=0;i<n;i++)
			{
				if(d[i]==f[i])
				c++;
			}
		
		if(c==n)
		cout<<"anagram";
		
		else
		cout<<"not an anagram";
	}
	
	else
	cout<<"not an anagram";

}
