// Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 
#include <iostream>
using namespace std;
int main()
	{
	int A,B,C;	
	//loop for apple 
	for(int a=0;a<101;a++)
		{
		A=a*1; 
		//loop for mangoes
		for(int b=33;b>0;b--)
			{
			B=b*3 ;
			//;oop for banana
			for(int c=201;c>0;c--)
				{
				//amount of money should be in whole
				if(c%2==0)
					{
					C=c/2;
					if(A+B+C==100 and a+b+c==100)//condition for 100 Rs and 100 fruits
						{
						cout<<a<<" apples,"<<b<<" mangoes,"<<c<<" bannanas."<<endl;
					}
				}
			
			}
		
		}
	}

return 0;
}
