#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}

int main()
{
    int a[100],i,j,n;
    cout<<"Enter the no of array";
    cin>>n;
    while(n==0)
    {
        cout<<"Re-Enter the no of array";
        cin>>n;
    }
    cout<<"Enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nBefore Sorting";
    display(a,n);
    cout<<"\nAfter Sorting";
    bubblesort(a,n);
    display(a,n);

}

