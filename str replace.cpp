#include <iostream>
using namespace std;
int replace(char str[],char t,char y)
{
if(str[0]=='\0')
return 0;

if (str[0]!= t)
replace(str +1,t,y);
if (str[0]==t)
{str[0]=y;
replace(str +1,t,y);
}

}


int main()
{
int n;
cin>>n;
char ch[n],a,b;
cin>>ch;
cin>>a>>b;
replace(ch,a,b);
cout<<endl<<ch;







}
