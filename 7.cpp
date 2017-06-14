#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t,n,i,j,coun,res;

    bool arr[104730];

    for(i=1;i<=104729;i++)
        {
            arr[i]=1;
        }

        int last=sqrt(104729);

        for(i=2;i<=last;i++)
        {
            if(arr[i]==1)
            {
                for(j=2;i*j<=104729;j++)
                    arr[i*j]=0;
            }
        }

        cin>>t;

        while(t--)
        {
            cin>>n;
            i=2,coun=0,res=0;

            while(coun!=n)
            {
                if(arr[i]==1)
                {
                    res=i;
                    coun+=1;

                }

                i+=1;

            }

            cout<<res<<endl;

        }

        return 0;

}

