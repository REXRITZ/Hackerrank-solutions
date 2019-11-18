#include <iostream>
using namespace std;
int main()
{
    int arr[6][6];
    int i,j;
    cout<<"accept\n";
        for (i=0;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                cin>>arr[i][j];
            }
        }
    for (i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int a,b,sum = 0,ans = -64;;
    a=0;
    while(a!=4)
    {
        b = 0;
        while(b!=4)
        {
            sum = arr[a][b]+arr[a][b+1]+arr[a][b+2]+arr[a+1][b+1]+arr[a+2][b]+arr[a+2][b+1]+arr[a+2][b+2];
            b++;
            if (sum>ans)
                ans = sum;
            else
                sum = 0;
        }
        a++;
    }

    cout<<ans;
}
