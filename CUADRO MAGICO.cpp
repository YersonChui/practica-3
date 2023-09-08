#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1;
    cout<<"Ingrese el tamano del cuadrado magico: ";
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    i=n/2;
    j=n-1;
    while(k<=n*n)
    {
        if(i==-1&&j==n)
        {
            j=n-2;
            i=0;
        }
        else
        {
            if(j==n)
            {
                j=0;
            }
            if(i<0)
            {
                i=n-1;
            }
        }
        if(a[i][j])
        {
            j-=2;
            i++;
            continue;
        }
        else
        {
            a[i][j]=k++;
        }
        j++;
        i--;
    }
    cout<<"El cuadrado magico es:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
