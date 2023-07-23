#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void selectionsort(int arrr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
    int max=INT_MAX;
    int k=0;
    for(int j=i;j<n;j++)
    {
        if(arrr[j]<=max)
        {
            max=arrr[j];
            k=j;
            

        }

    }

               int temp = arrr[i];
                arrr[i] = max;
                arrr[k] = temp;
  }
  
}

int main()
{
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int arrr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arrr[i];
    }
    selectionsort(arrr,n);
    for(int d=0;d<n;d++)
    {
        cout<<arrr[d]<<" ";
    }
  
}