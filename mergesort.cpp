
#include<iostream>
using namespace std;
int merge(int ar[],s,e);

{int mid =(s+e)/2;
int i=s,int temp[e];
int j= mid+1;
int k=s;
	while(i<=mid;&& j<=e)
	{
		if (ar[i]<ar[j])
		{
			temp[k++]=ar[i++];
		}
		else
			temp[k++]= ar[j++];
		
	}
	
	while(i!=s)
		temp[k++]= ar[i++];
	for(k=0;k<=e;k++)
	{
		ar[k]=temp[k];	


	}

	
}
int mergeS(int arr[],int si,int ei)
{
    int mid,t;

    if(si>=ei)
    {

        return 0;
    }

 
 mid=(si+ei)/2;
 mergeS(arr,si,mid);
 mergeS(arr,mid+1,ei);
merge(arr,si,ei);
}


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

mergeS(arr,0,s);
n=0;
while(n<s)
{
cout<<arr[n]<<" ";
n++;
}
}
