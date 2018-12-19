#include <iostream>
using namespace std;

/* void printArray(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
	printf("n");
} */

void BubbleSort(int a[], int n)
{
	int step=0;
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
		step++;
		cout << "Step " << step << ": ";
		for(int k=0; k<n; k++)
		{
			cout << a[k] << " ";
		}
		cout << endl;
	}

}

int main()
{
	int i;
	int n;	// number of values
	int step=0;

	cout << "Enter the number of values: ";
	cin >> n;

	// fill an array 'a' with user inputted values
	int a[n];
	for(i=0; i<n; i++)
	{
		cout << "Enter value ";
		cin >> a[i];
	}
	BubbleSort(a, n);
	
	cout << "Sorted array: ";
	for(i=0; i<n; i++)
	{
		cout << a[i] << " ";	
	}
	cout << endl;
	return 0;
}


