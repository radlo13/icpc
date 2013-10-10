#include<iostream>
#include<string>
using namespace std;

int minchar(int c1, int c2)
{
	if(c1>c2)
	{
		return c1;
	}
	else
	{
		return c2;
	}

}
int main()
{
	string input1;
	string input2;
	while(getline(cin,input1))
	{
		getline(cin, input2);
		int s1[128]={};
		int s2[128]={};
		int size1 =input1.size();
		int size2 =input2.size();
		
		for(int i=0; i<size1; i++)
		{
			s1[input1[i]]++;
			//cout<< " string 1" <<endl;
			//cout<<s1[input1[i]] << endl;	
		}
		
		for(int i=0; i<size2;i++)
		{
			s2[input2[i]]++;
			//cout<< "string 2" << endl;
			//cout<<s2[input2[i]] << endl;
			
		}
		//cout<<static_cast<char>(97);
		//cout<<static_cast<char>(122);
		
		for(int i=97; i<=122;i++)
		{
			if((s1[i]>0)&& (s2[i]>0))
			{
				for(int j=1; j<=min(s1[i], s2[i]); j++)
				{
					//printf("%c",i);
					cout<<static_cast<char>(i);
				}
			}
		}
		
		cout << endl;
	}

	return 0;
}
