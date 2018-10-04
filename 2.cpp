/*You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user)*/

#include<iostream>
#include<cstring>
using namespace std;
//Asking for weekley sale to user
void asksale(int &a)
	{
	cout<<"Input weekley sale that is number of shoes sales per week"<<endl;
	cin>>a;
}
//Just a salary of Rs 600 per week
int salfirst(int b)
	{
	b=600;
	return b;
}
// A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
float salsecond(int c,int a)
	{	
	int sal=7*40;//Payement for hours
	float comi=a*0.1*225;//comission
	float total=sal+comi;
	return total;
}
// No salary, but 20% commissions and Rs20 for each pair of shoes sold
int salthird(int a)
	{
	int comi=a*0.2*225;//commision
	int fromshoe=a*20;//payement for pair of shoes sold
	int total=comi+fromshoe;
	return total;
}
//driver programe to check best option
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
