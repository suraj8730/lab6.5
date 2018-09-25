#include<iostream>
#include<cstring>
using namespace std;
void asksale(int &a)
	{
	cout<<"Input weekley sale that is number of shoes sales per week"<<endl;
	cin>>a;
}
int salfirst(int b)
	{
	b=600;
	return b;
}
float salsecond(int c,int a)
	{	
	int sal=7*40;
	float comi=a*0.1*225;
	float total=sal+comi;
	return total;
}
int salthird(int a)
	{
	int comi=a*0.2*225;
	int fromshoe=a*20;
	int total=comi+fromshoe;
	return total;
}
void best(int a,int b,int c)
	{
	if(a>b and a>c)
		{
		cout<<"The best option for you is first one"<<endl;
	}
	else if(b>c and b>a)
		{
		cout<<"The best option for you is second one"<<endl;
	}
	else
		{
		cout<<"The best option for you is third one"<<endl;
	}
}
int main()
	{
	int A,B,C;
	asksale(A);
	cout<<"your weekley sale is "<<A<<endl;
	salfirst(B);
	cout<<"If you choose first option your salary will be "<<salfirst(B)<<endl;
	salsecond(C,A);
	cout<<"If you choose second option your salary will be "<<salsecond(C,A)<<endl;
	salthird(A);
	cout<<"If you choose third option your salary will be "<<salthird(A)<<endl;
	best(salfirst(B),salsecond(C,A),salthird(A));
	return 0;
}
