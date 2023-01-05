#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    // int temp =*a;
    // *a=*b;
    // *b=temp;
   *a=*a+*b;
   *b=*a-*b;
   *a=*a-*b;

}
void display(int a[] , int n)
{
    for(int i=0 ; i<n ;i++)
{
    cout<<"ENTER ELEMENT AT "<<i<<" is :";
    cout<<a[i]<<endl;
}
}
int main()
{
int n; cin>>n;
int a[n];
for(int i=0 ; i<n ;i++)
{
    cout<<"ENTER ELEMENT: ";
    cin>>a[i];
}
for(int i =0 ;i <n ;i+=2)
{
    if(i+1<n)
    swap(&a[i],&a[i+1]);
}
display(a,n);

    return 0;
}