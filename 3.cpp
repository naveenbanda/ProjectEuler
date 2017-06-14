#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(long long int a)
{
    long long int last=sqrt(a);

    for(long long int i=2;i<=last;i++)
    {
        if(a%i==0)
            return false;
    }

    return true;

}

int main()
{
    long long int t,n,i,j,last,large=1;

    cin>>t;

    while(t--)
    {
        cin>>n;
        last=sqrt(n);

        for(i=1;i<=last;i++)
        {
            if(n%i==0)
            {
                if(isPrime(i))
                {
                    if(large<i)
                        large=i;

                }

                if(isPrime(n/i))
                {
                    large=n/i;

                    break;
                }
            }
        }

        cout<<large<<endl;

        large=1;

    }

    return 0;

}


