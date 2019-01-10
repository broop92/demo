#include <bits/stdc++.h>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int mult(int a,int b)
{
	return a*b;
}
int divsn(int a,int b)
{
	return a/b;
}
int subs(int a,int b)
{
	return a-b;
}
int main()
{
	cout<<"welcome!"<<endl;
	while(1)
	{
		int choice;
		cout<<"enter your choice 1.add 2.mult 3.div 4.subs 5.exit:"<<endl;
		cin>>choice;
		if(choice == 1){
			int a,b;
			cout<<"enter a:"<<" ";
			cin>>a;
			cout<<"enter b:"<<" ";
			cin>>b;
			cout<<endl;
			cout<<"result is:"<<add(a,b)<<endl;
		}
		else if(choice == 2)
		{
			int a,b;
			cout<<"enter a:"<<" ";
			cin>>a;
			cout<<"enter b:"<<" ";
			cin>>b;
			cout<<endl;
			cout<<"result is:"<<mult(a,b)<<endl;
		}
		else if(choice == 3)
		{
			int a,b;
			cout<<"enter a:"<<" ";
			cin>>a;
			cout<<"enter b:"<<" ";
			cin>>b;
			cout<<endl;
			cout<<"result is:"<<divsn(a,b)<<endl;
		}
		else if(choice == 4)
		{
			int a,b;
			cout<<"enter a:"<<" ";
			cin>>a;
			cout<<"enter b:"<<" ";
			cin>>b;
			cout<<endl;
			cout<<"result is:"<<subs(a,b)<<endl;
		}
		else if(choice == 5)
		{
			cout<<"Thank you!"<<endl;
			break;
		}
		else
			cout<<"Wrong input!"<<endl;
		
	}
	return 0;
}