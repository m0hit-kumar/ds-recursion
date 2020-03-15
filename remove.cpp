#include<iostream>
using namespace std;

int removeD(char x[])
{
if(x[0]=='\0')
return 0;
if(x[0]!=x[1])
{

    removeD(x+1);
}

 if (x[0]==x[1])
 {
  int g=1;
  for(;x[g]!='\0';g++)
   {
     x[g]= x[g+1];

   }
  x[g]= x[g+1];//taking care of null character

 removeD(x);
 }





return 0;
}//function ends here



int main()
{
int n;
cin>>n;
char ch[n];
cin>>ch;
removeD(ch);
cout<<endl<<ch;







}
