#include<iostream>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
char a[]="termux-sms-send -n ",b[100],c[100];
int p,q;
cout<<"Enter the number\n";
cin>>b;
cout<<"The msg u want to send\n";
cin>>c;
cout<<"Enter the hour and minute (In 24 hour format)\n";
cin>>p>>q;
strcat(a,b);
strcat(a," ");
strcat(a,c);
for(int i=0;i<1;)
        {
        time_t k=time(NULL);
        struct tm *s=localtime(&k);
        int x=s->tm_min;
        int y=s->tm_hour;
        if(p==y&&q==x)
                {
                system(a);
                exit(0);
                }
        }
}
