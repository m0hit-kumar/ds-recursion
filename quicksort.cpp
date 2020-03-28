#include<iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
 int quicksort(int arr[],int si,int ei)
 {

 
     int c;
     if(si>=ei|| ei==0)
    {

        return 0;
    }
    c=partition(arr,si,ei);

    quicksort(arr,si,c-1);
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
