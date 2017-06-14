#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int *res;
    res=new long long int[2000001];
    int t,n,i,j,coun;

    bool *arr;
    arr=new bool[2000001];

    for(i=1;i<=2000000;i++)
        {
            arr[i]=1;
        }

        uint64_t last=sqrt(2000000);

        for(i=2;i<=last;i++)
        {
            if(arr[i]==1)
            {
                for(j=2;i*j<=2000000;j++)
                    arr[i*j]=0;
            }

        }

        res[1]=0;

        for(i=2;i<=2000000;i++)
            res[i]=res[i-1]+(arr[i]*i);

        cin>>t;

        while(t--)
        {
            cin>>n;

            cout<<res[n]<<endl;

        }

        delete res;

        delete arr;

        return 0;

}

