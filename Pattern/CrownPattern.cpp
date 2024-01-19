#include<iostream>
using namespace std;

void numberCrown(int n) {
    for(int i=0;i<n;i++)
	{
		int temp=1;
		for(int j=0;j<=i;j++)
		{
			cout<<temp<<" ";
			temp++;
		}
        for(int j=0;j<n-i-1;j++)

        {
             cout<<" ";
        }
        for(int j=0;j<(n-i-1)*3;j++)
        {
             cout<<" ";
        }
        int t=i+1;
        for(int j=0;j<=i;j++)
		{
			cout<<t<<" ";
			t--;
		}
    	cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter Size:"<<endl;
	cin>>n;

	numberCrown(n);
}