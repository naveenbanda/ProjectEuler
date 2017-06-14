#include<iostream>

using namespace std;

int main()
{
    uint64_t t,n,sum=0,prev=0,cur=1,temp;

    cin>>t;

    while(t--)
    {

    cin>>n;

    while(cur+prev<=n)
    {
        if((cur+prev)%2==0)
            sum+=cur+prev;

            temp=prev;
            prev=cur;
            cur=cur+temp;

    }

    cout<<sum<<endl;

    sum=0;
    prev=0;
    cur=1;

    }

    return 0;

}

