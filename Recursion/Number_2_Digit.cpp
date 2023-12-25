#include<string>
#include<iostream>
using namespace std;


int sayDigit(int n)
{
    if(n == 0)
    {
        return 0;
    }

    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    int digit=n%10;
    
    
    sayDigit(n/10);

    cout<<" "<<arr[digit];  
    

}


int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;

    sayDigit(n);
}