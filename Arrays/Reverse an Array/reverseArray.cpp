#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}


int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
	reverseArray(a,n);
	for(int i=0;i<n;i++)
      cout<<a[i];
	return 0;
}
