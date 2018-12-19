#include <iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}

}

/*int BinarySearch(int a[], int begin, int end, int key)
{
	
	while(end >= begin)
	{
		int mid=(begin+end)/2;
		if(key<a[mid])
		{
			end=mid-1;
		}
		else if(key==a[mid])
		{
			result=mid;
		}
		else if(key>a[mid])
		{
			begin=mid+1;
		}
		else
		{
			result=-1;
		}
	}
	 // if key is not found
}*/

int main()
{
	int key;
	cout << "Enter a key that you wish to search for: ";
	cin >> key;

	int n; // number of values

	cout << "Enter the number of values that you are searching through: ";
	cin >> n;

	// fill an array 'a' with user inputed values
	cout << "Enter your values here: ";
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	cout << endl;

	// sort the array
	BubbleSort(a, n);

	// search
	int begin=a[0];
	int end=a[n-1];
	int result;

	while(end >= begin)
	{
		int mid=(begin+end)/2;
		if(key<a[mid])
		{
			end=mid-1;
		}
		else if(key==a[mid])
		{
			result=mid;
		}
		else if(key>a[mid])
		{
			begin=mid+1;
		}
		else
		{
			result=-1;
		}


	// display the index in which the key is found
	if(result==-1)
	{
		cout << "Your key " << "(" << key << ")" << " cannot be found in this set of values." << endl;
	}
	else
	{
		cout << "Your key " << "(" << key << ")" << " is found at index " << result << "." << endl;
	}
	return 0;
	}
}