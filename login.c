#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, l;
    char mysalt[] ="coder",pass[100],hash[100];
    FILE *k;
    k=fopen("lock.txt","r");
    printf("Enter the password:\n");
    scanf("%s",pass);
    fscanf(k,"%s",hash);
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
    for(i=0;pass[i]!='\0';i++)
    {
        pass[i]=pass[i]+4;
    }
    if(strcmp(pass,hash)==0)
    {
        printf("Correct password\n");
    }
    else 
    {
        printf("Incorrect password\n");
    }
}
