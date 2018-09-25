#include<iostream>
#include<cmath>
using namespace std;
int main()
	{
	unsigned long long int sum=0;
	for(unsigned long long int i=1;i>0;++i)
		{
		sum += i;
		long double root= sqrt(sum);
		//greatest integer function
		int grtint= floor(root);
		long double A=(root-grtint);
		if(A==0)
			{
			cout<<sum<<endl;
		}
	}
	return 0;		
}
