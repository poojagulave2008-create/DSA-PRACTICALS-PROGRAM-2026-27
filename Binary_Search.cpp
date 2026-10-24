#include<iostream>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int first=0,last=n-1,mid;
    while (first<=last)
    {
        mid=(first+last)/2;
        if (a[mid]==x)return (mid);
        else if (a[mid]<x) first = mid+1;
        else last = mid-1;
    }
    return(-1);
}
    int main()
{
    int a[50];
    int n;
    cout<<"How many element";
    cin>>n;
    cout<<"Enter"<<n<<"element";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int x;
    cout<<"Enter element to search";
    cin>>x;
    int Location=binary_search(a,n,x);
    if(Location==-1)cout<<"Element is not found";
    else cout<<"Element found at index;"<<Location;
    return(0);

}
/*PS C:\Users\pooja\OneDrive\Documents\c++> C:\Users\pooja\OneDrive\Documents\c++\Binary_search.exe
How many element5
Enter5element10 20 30 40 50
Enter element to search40
Element found at index;3
PS C:\Users\pooja\OneDrive\Documents\c++> */