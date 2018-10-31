#include <iostream>
#include<vector>
#include<stdio.h>
#define SIZE 100
using namespace std;
	int main()
	{
		int input;
		int a[SIZE];
		int minIndex;

		// fill a
		printf("Input your set of integers: ");
		for(z=0; z<SIZE; ++z)
		{
			
		}
		scanf("%d",&a);
		
		// sort a
		for(int i=0; i<sizeof(a); ++i)
		{
			for(int j=i; j<sizeof(a); ++j)
			{
				int minIndex=j;
				int min=a[j];
				for(int k=j+1; k<sizeof(a); ++k)
				{
					if(a[k] < min)
					min=a[k];
					minIndex=k;
				}
			}
			if(minIndex!=j)
			{
				//swap
				int temp=a[j];
				a[j]=a[minIndex];
				a[minIndex]=temp;
			}
		}
		
		// search a
		int key;
		cout << "Input an int key that you wish to search for." << endl;
		cin >> key;
		int n=sizeof(a);
		int low=0;
		int high=sizeof(a)-1;
		while(high>=low)
		{
			int mid=(low+high)/2;
			if(key<a[mid])
			{
				high=mid-1;
			}
			else if(key==a[mid])
			{
				return mid;
			}
			else
			{
				low=mid+1;
			}
		}
		return -1; // if key is not found in a

	}
