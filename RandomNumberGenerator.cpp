#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int num,random,frand;
	srand(time(0));
	num=rand();
	random = ((num%123)+2);
	frand = random*random;
	cout<<"Random Number is "<<frand;
	return 0;	
}
