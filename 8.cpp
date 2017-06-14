#include<iostream>
#include<cstdio>
#include<stdlib.h>

using namespace std;

int main()
{
    int ma=1,ne=1;
    int i,j,t,n,k;
    int *arr;
    char c;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>k;

        ma=1;
        ne=1;

        arr=new int[n+1];

        for(i=1;i<=n;i++)
        {
            cin>>c;
           
                arr[i]=c-'0';
                
           
        }

        for(i=1;i<=k;i++)
            ma*=arr[i];

            ne=ma;

        for(i=1;i<=n-k;)
        {
            if(arr[i]==0)
            {
                ne=1;

                for(j=i+1;j<=k+i;j++)
                    ne*=arr[j];

            }
            
            if(arr[i]!=0)
            {
                ne/=arr[i];
                ne*=arr[i+k];
            }

            if(ne>ma)
                ma=ne;

            i+=1;

        }

        cout<<ma<<endl;

        delete arr;

    }

    return 0;

}



