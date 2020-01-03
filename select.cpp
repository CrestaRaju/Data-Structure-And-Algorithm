#include<iostream>
using namespace std;
int selectionsort(int a[],int n)
{
    int i,j,small,temp;
    for(i=0;i<n;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[small])

            {
                small=j;
            }
        }
        temp=a[i];
        a[i]=a[small];
        a[small]=temp;
    }

}

  void display(int a[])
    {

        int i;
        for(i=0;i<5;i++)
        {
            cout<<"\t"<<a[i];
        }
    }
int main()
{
    int a[5],i;
    cout<<"Enter the array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\nAray before sorting:\n";
    display(a);
    cout<<"\n"<<"Aray after sorting";
    selectionsort(a,5);
    display(a);

}
