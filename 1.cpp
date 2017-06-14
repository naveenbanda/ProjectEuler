#include<iostream>

using namespace std;

int main()
{
   uint64_t t,n;
   uint64_t a3,a5,a15,s3,s5,s15,n3,n5,n15;

    cin>>t;

    while(t--)
    {
        cin>>n;

        n=n-1;

        a3=n-(n%3);
        a5=n-(n%5);
        a15=n-(n%15);
        n3=a3/3;
        n5=a5/5;
        n15=a15/15;

        s3=(n3)*(3+a3)/2;
        s5=(n5)*(5+a5)/2;
        s15=(n15)*(15+a15)/2;

        cout<<s3+s5-s15<<endl;

    }

    return 0;

}

