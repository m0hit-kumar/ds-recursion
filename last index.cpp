#include<iostream>
using namespace std;
int ret(int arr[],int si,int w)
{
    int y=5;
  if (arr[si]==w)
        return si+1;
  else if (si==0)
  return -1;
  else
   y= ret(arr,si-1,w);
    return y;

}


int main()
{



int n,c;
cin>>n;

int ar[n];
for (int i=0;i<n;i++)
{
    cin>>ar[i];

}

cout<<"Enter the number to be searched ";
cin>>c;
cout<<ret(ar,n,c);

return 0;
}
