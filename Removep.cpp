#include <iostream>
using namespace std;

length(char str[])
{

    int n=0;
    while(str[n]!='\0')
    {
        n++;
    }
    return n;
}

int replacepi(char str[])
{
    int len,i;
    if(str[0]=='p'&&str[1]=='i')
    {
        len=length(str);
        str[len+2]='\0';
        for(i=len;i>=0;i--)
        {
            str[i+2]=str[i];
            //cout<<"im inside";

        }
        str[0]='3';
        str[1]='.';
        str[2]='1';
        str[3]='4';
     replacepi(str+2);
    }
if(str[0]!='p')
{
    replacepi(str+1);
}
if(str[0]=='\0')

{
    return 0;
}

}

main()

{
char arr[15];

cin>>arr;
replacepi(arr);
cout<<arr;

}
