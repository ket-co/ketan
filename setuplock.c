#include <stdio.h>
#include <string.h>
void salt(char pass[]);
void hash(char pass[]);
int main()
{ 
    int l;
    char pass[100];
    FILE *k;
    k=fopen("lock.txt","w");
    a:
    printf("Enter the password (the password should be minimum of 4 characters)\n");
    scanf("%s", pass);
    if(strlen(pass)<4)
    {
        goto a;
    }
    salt(pass);
    hash(pass);
    fprintf(k,"%s",pass);
    printf("Password set successfully");
}
void salt(char pass[])
{
    int i, j, l;
    char mysalt[] ="coder";
    l=strlen(pass);
    for(i=0;i<l+5;i++)
    {
        if(i>3&&i<9)
        {
            pass[i+5]=pass[i];
        }
        if (i>3&&i<9)
        {
            pass[i]=mysalt[i-4];
        }
    }
    pass[i+5]='\0';
}
void hash(char pass[])
{
    int i;
    for(i=0;pass[i]!='\0';i++)
    {
        pass[i]=pass[i]+4;
    }
}
