#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,5,7,9};
    int i,j,k,l;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            for (k=0;k<4;k++)
            {
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            }
        }
    }
      for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            for (k=0;k<4;k++)
            {
                for (l=0;l<4;l++)
                {
                   cout<<arr[i]<<arr[j]<<arr[k]<<arr[l]<<endl;
                }
            }
        }
    }

    return 0;
}
