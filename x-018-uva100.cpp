
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,y;
    //freopen("in.txt","r",stdin);

    while(scanf("%lld%lld",&a,&b) !=EOF)
    {
      long long hcount=0;
        x=a;
        y=b;
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        for(int i=a; i<=b; i++)
        {
            long count=0;
            count++;
            for(int j=i; j>1;)
            {
                if(j%2!=0)
                {
                    j=3*j+1;
                    count++;
                }
                else if(j%2==0)
                {
                    j=j/2;
                    count++;
                }
            }
            if(count>hcount)
                hcount=count;
        }
        printf("%lld %lld %lld\n",x,y,hcount);
    }
    return 0;
}
