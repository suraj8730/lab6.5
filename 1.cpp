#include <iostream>
using namespace std;
int main()
	{
	int A,B,C;	
	for(int a=0;a<101;a++)
		{
		A=a*1; 
		for(int b=33;b>0;b--)
			{
			B=b*3 ;
			for(int c=201;c>0;c--)
				{
				if(c%2==0)
					{
					C=c/2;
					if(A+B+C==100 and a+b+c==100)
						{
						cout<<a<<" apples,"<<b<<" mangoes,"<<c<<" bannanas."<<endl;
					}
				}
			
			}
		
		}
	}

return 0;
}
