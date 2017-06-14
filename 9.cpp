#include<iostream>

using namespace std;

int main()
{
    int t,n,i,ma,temp,a,b,c;

    cin>>t;

    while(t--)
    {
        cin>>n;

        ma=0;

        for(a=1;a<=(n-3)/3;a++)
        {
            b=(n-a*2)/2;
            c=n-a-b;

            for(b;b<c;b)
            {
                temp=0;

                if(a*a+b*b==c*c)
                {
                    temp=a*b*c;
                }

                b+=1;
                c=n-a-b;

                if(temp>ma)
                    ma=temp;

            }

        }

        if(ma==0)
            ma=-1;

        cout<<ma<<endl;

    }

    return 0;

}

