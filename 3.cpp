/* The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
	{
	unsigned long long int sum=0;//for big numbers
	for(unsigned long long int i=1;i>0;++i)
		{
		sum += i;//ading of numbers
		//checking for perfect square
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
