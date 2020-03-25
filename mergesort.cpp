#include<iostream>
using namespace std;

int mergea(int ar[],int s,int e)

{
int mid =(s+e)/2;
int i=s ,temp[100] , j= mid+1,k=s;

	while(i<=mid && j<=e)
	{
		if (ar[i]<ar[j])
		{
			temp[k++]=ar[i++];
		}
		else
			temp[k++] = ar[j++];

	}

	while(i<=mid)
		{
		    temp[k++]= ar[i++];
		}
		while(j<=e)
		{
		    temp[k++]= ar[j++];
		}

	for(k=0;k<=e;k++)
	{
		ar[k]=temp[k];

	}

}
int mergeS(int arr[],int si,int ei)
{
    int mid=0;

    if(si>=ei)
    {

        return 0;
    }


 mid=(si+ei)/2;
 mergeS(arr,si,mid);
 mergeS(arr,mid+1,ei);
 mergea (arr,si,ei);
}




int main()
{
    int s,n=0;
cin>>s;
int arr[s];


while(n<s)
{
cin>>arr[n];
n++;
}

mergeS(arr,0,s-1);
n=0;
while(n<s)
{
cout<<arr[n]<<" ";
n++;
}
}
