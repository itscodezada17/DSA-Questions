#include <bits/stdc++.h>
using namespace std;

int SecondLargest(int a[], int n)
{
    int SecondL=-1,L=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[L])   // if element at i is greater than largest element then largest become 2nd largest and ith element becomes largest
        {
            SecondL=L;
            L=i;
        }
        else
        if(a[i]<a[L])    // if element at i is less than largest tehn there will be two cases
        {
            if(a[i]>a[SecondL])     // if greater than 2nd largest then 2nd largest changes to i
            SecondL=i;
            else
            if(SecondL==-1)       // if second largest is still -1 ( means no values assigned ) then i will be 2nd largest 
            SecondL=i;
        }
    }
    return a[SecondL];
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
	  cout<<SecondLargest(a,n)<<"\n";
	return 0;
}
