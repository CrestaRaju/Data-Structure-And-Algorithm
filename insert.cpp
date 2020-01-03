#include<iostream>
using namespace std;
int insertionsort(int a[],int n)
{

    int i,temp,j;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i;
        while(j>0 && temp<a[j-1])
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;

    }
}
int display(int a[]){

    int i;
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<a[i];
    }
}

int main(){
    int a[5],i;
    cout<<"Enter Array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Insertion sort Before Sorting";
    display(a);
   insertionsort(a,5);
    cout<<"Inserton sort after Sorting";

    display(a);

}
