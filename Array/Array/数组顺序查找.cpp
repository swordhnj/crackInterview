#include<iostream>
using namespace std;
int seqLookUp( int a[],int num)
{
	for (int i = 0; i < 10; ++i)
	{
		if (a[i] == num)
			return i;
	}
	return -1;
}
int main()
{
	int b;
	int arr[10] = { 3,45,6,77,8,9,0,12,12,89 };
	int num = 12;
	b = seqLookUp(arr, num);
	if (b>=0)
		cout << b << endl;
	else
		cout << "num not found" << endl;
}