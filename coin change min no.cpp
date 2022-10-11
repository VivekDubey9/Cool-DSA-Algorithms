//find min no. of  coin to make the given sum. use coin given in array in infinite quantity
#include<bits/stdc++.h>
using namespace std;
int coin_change(int a[],int sum,int n)
{
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(j==0) t[i][j]=0;
            if(i==0) t[i][j]=INT_MAX-1;
        }
    for(int i=1,j=0;j<sum+1;j++)
    {
        if(j%a[0]==0)
            t[i][j]=j/a[0];
        else 
            t[i][j]=INT_MAX-1;
    }
    
    for(int i=2;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(a[i-1]<=j)
            {
                t[i][j]=min(t[i][j-a[i-1]]+1,t[i-1][j]);
            }
            else 
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int N;
    cin>>N;
    int c=coin_change(a,N,n);
    cout<<c;
    return 0;
}