#include<iostream>
using namespace std;
int linear_search(int a[], int n, int x)
{
    for (int i=0; i<n; i++)
    {
        if(a[i]==x)
        return(i);

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
    int Location=linear_search(a,n,x);
    if(Location==-1)cout<<"Element is not found";
    else cout<<"Element found at index;"<<Location;
    return(0);


}
/*PS C:\Users\pooja\OneDrive\Documents\c++> C:\Users\pooja\OneDrive\Documents\c++\Linear_search.exe
How many element5
Enter5element10 20 30 40 50
Enter element to search50
Element found at index;4
PS C:\Users\pooja\OneDrive\Documents\c++> */
