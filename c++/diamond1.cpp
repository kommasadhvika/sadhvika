#include <iostream>
using namespace std;
int main()
{
  int n,i,j,s;
  cout<<"enter the rows\n";
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
      cout<<" ";
    }
    for(s=0;s<=i;s++)
    {
      cout<<" *";
    }
    cout<<"\n";
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
    cout<<" ";
    }
    for(s=0;s<n-i;s++)
    {
      cout<<" *";
    }
    cout<<"\n";
  }
}
