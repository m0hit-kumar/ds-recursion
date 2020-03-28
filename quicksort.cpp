#include<iostream>
using namespace std;
int partition(int *ar, int s, int e)
{
    
   //getting position
   int i=s,n=ar[s],flag=0;

   while(i<=e)
   {
       if(ar[i]<n)
       {
           flag++;
       }
  i++; }

int temp=0;
temp=ar[flag];
ar[flag]=ar[s];
ar[s]=temp;


//checking elements
int a=s,b=flag+1;
while(a<flag&&b<=e)
{
    if (ar[a]<ar[flag])
    {
        a++;
    }

    else if(ar[a]>=ar[flag])
    {
        if(ar[b]<ar[flag])
            {
            temp=0;
            temp=ar[a];
            ar[a]=ar[b];
            ar[b]=temp;
                b++;
            }
        else b++;
    }
}//end of while loop

return flag;
}//end of position
 int quicksort(int arr[],int si,int ei)
 {
  
     int c;
     if(si>=ei|| ei==0)
    {

        return 0;
    }
    c=partition(arr,si,ei);

    quicksort(arr,si,c);
    quicksort(arr,c+1,ei);

 }
int main()
{
    int s=7,n=0;

int arr[]={9,4,5,6,7,3,8};




quicksort(arr,0,s-1);
n=0;
while(n<s)
{
cout<<arr[n]<<" ";
n++;
}
}

