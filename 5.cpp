#include<iostream>
#include<math.h>

using namespace std;

int main()
{

    long long int t,n,i,j,temp,temp1,flag=1,last;

    int *arr;

    cin>>t;

    while(t--)
    {
        cin>>n;

        arr=new int[n+1];

        for(i=1;i<=n;i++)
        {
            arr[i]=1;
        }

        last=sqrt(n);

        for(i=2;i<=last;i++)
        {
            if(arr[i]==1)
            {
                for(j=2;i*j<=n;j++)
                    arr[i*j]=0;
            }
        }

        temp=1;

        for(i=2;i<=n;i++)
        {
            if(arr[i]==1)
                temp*=i;
        }

        i=1;

        while(1)
        {
            flag=1,temp1=temp*i;

            for(j=n;j>=2;j--)
            {
                if(temp1%j!=0)
                {
                    flag=0;
                    break;
                }
            }

            if(flag==1)
            {
                cout<<temp1<<endl;
                break;
            }

            i+=1;
        }

        free(arr);

    }

    return 0;

}

