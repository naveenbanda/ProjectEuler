#include<iostream>

using namespace std;

int main()
{
    long long int t,n,sa,sb;

    cin>>t;

    while(t--)
    {
        cin>>n;

        sa=n*(n+1)/2;
        sa=sa*sa;

        sb=n*(n+1)*(2*n+1)/6;

        cout<<sa-sb<<endl;

    }

    return 0;

}

