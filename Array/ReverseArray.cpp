#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> ReverseArray(vector<int> v)
{
    int i=0,j=v.size()-1;

    while(i<=j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }

    return v;
}
int main()
{
    vector<int>v;
    v.push_back(12);
    v.push_back(34);
    v.push_back(4);
    v.push_back(3);
    v.push_back(31);
    v.push_back(41);

    

    vector<int> rev= ReverseArray(v);

    for(int i=0;i<rev.size();i++)
    {
        cout<<" "<<rev[i];
    }
}