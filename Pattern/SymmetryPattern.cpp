#include<iostream>
using namespace std;

void symmetry(int n) {
    
    for(int i=0;i<n;i++)
	{
      for (int j = 0; j < n - i; j++) {
        cout << "* ";
      }
	  for(int j=0;j<i*2;j++)
	  {
		  cout<<" ";
	  }
	  for(int j=0;j<i*2;j++)
	  {
		  cout<<" ";
	  }
	  for(int j=0;j<n-i;j++)
	  {
		  cout<<"* ";
	  }
      cout << endl;
    }

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		for(int j=0;j<(n-i-1)*2;j++)
	    {
		  cout<<" ";
	    }
		for(int j=0;j<(n-i-1)*2;j++)
	    {
		  cout<<" ";
	    }
		for(int j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter Number:";
	cin>>n;
	symmetry(n);
}