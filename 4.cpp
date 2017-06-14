#include<iostream>
using namespace std;

bool isPalindrome(int x)
    {
    if(x/100000==x%10)
        {
        x=x/10;
        if((x/1000)%10==x%10)
            {
            x=x/10;
            if((x/10)%10==x%10)
                return true;
        }
    }

    return false;

}

int main()
{
    int t,n,flag;

    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        for(int num=n-1;num>=100000;num--)
        {

              if(isPalindrome(num))
                  {
                  for(int i=143;i<=999;i++)
                      {
                      if(num%i==0 && (num/i)/1000==0)
                          {
                          cout<<num<<endl;
                          flag=1;
                          break;
                      }
                  }
          }

            if(flag==1)
                break;
        }

}

    return 0;

}

