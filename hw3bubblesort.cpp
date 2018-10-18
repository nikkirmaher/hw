#include <iostream>
#include <stdio.h>
using namespace std;

int a[]={4,9,2,1,3,4,7,8,5,0,6};

int main()
{
	for(int i=0; i<=10; ++i)
	{
		for(int j=i+1; j<=10-i; ++j)
		{
			if(a[j]<a[i])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		
		}
	}
	// print array
	return 0;
}

