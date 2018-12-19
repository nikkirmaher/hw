#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string yourSum(string smallerVal, string largerVal)
{
	if(smallerVal.length() > largerVal.length())
	{
		string temp;
		largerVal=temp;
		largerVal=smallerVal;
		smallerVal=temp;
	}
	string str = "";
	int a = smallerVal.length();
	int z = largerVal.length();
	int diff = z-a;
	int carry=0;

	for(int i=a-1; i>=0; i--)
	{
		int sum=((smallerVal[i]-'0')+(largerVal[i+diff]-'0')+carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}

	for(int i=z-a-1; i>=0; i--)
	{
		int sum=((largerVal[i]-'0')+carry);
		str.push_back(sum%10 + '0');
		carry=sum/10;
	}

	if(carry)
	{
		str.push_back(carry+'0');
	}

	reverse(str.begin(), str.end());

	return str;
}

int main()
{
	string largerVal;
	string smallerVal;

	cout << "input a value: \n";
	cin >> smallerVal;

	cout << "input a second value: \n";
	cin >> largerVal;


	cout << "Sum = " << yourSum(smallerVal, largerVal) << endl;

	return 0;

}