#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void board(char c[]);
void echo();
int main()
{
    int t,i,count=1,arr[100],l;
    char a[]="0123456789",p1[100],p2[100],hold='0';
    printf("Welcome to Tik-Tac-Toe game\n");
    printf("Please press 'CTRL with +' 3 times\n");
    printf("Enter the name of player 1\n");
    scanf("%s",p1);
    printf("Enter the name of player 2\n");
    scanf("%s",p2);
    board(a);
    while(hold!='X'&&hold!='O')
    {
        if (count%2==0)
        {
        some:
            printf("%s's turn...\n", p2);
            scanf("%d",&t);
            if(t<1||t>9)
            {
                printf("Please enter the valid number\n");
                goto some;
            }
            for(i=0;i<count;i++)
            {
                if(arr[i]==t)
                {
                    printf("This position is already taken\n");
                    goto some;
                }
            }
            arr[count] = t;
            a[t] = 'O';
            board(a);
            count++;
        }
        else
        {
        where:
            printf("%s's turn..\n", p1);
            scanf("%d", &t);
            if(t<1||t>9)
            {
                printf("Please enter the valid number\n");
                goto where;
            }
            for(i=0;i<count;i++)
            {
                if(arr[i] == t)
                {
                    printf("This position is already taken\n");
                    goto where;
                }
            }
            arr[count] = t;
            a[t] = 'X';
            board(a);
            count++;
        }
        for(i=1;i<8;i+=3)
        {
            if(a[i]==a[i+1]&&a[i]==a[i+2])
            {
                hold=a[i];
            }
        }
        for(i=1;i<4;i++)
        {
            if(a[i]==a[i+3]&&a[i]==a[i+6])
            {
                hold=a[i];
            }
        }
        if(a[1]==a[5]&&a[1]==a[9])
        {
            hold=a[i];
        }
        if(a[3]==a[5]&&a[3]==a[7])
        {
            hold=a[i];
        }
        if(count==10&&hold!='X'&&hold!='O')
        {
            printf("Draw\n");
        }
    }
    if(hold=='X')
    {
        printf("%s won the game\n", p1);
    }
    else if(hold=='O')
    {
        printf("%s won the game\n", p2);
    }
}
void board(char c[])
{
    system("clear");
    echo();
    int i,j,k=0,b;
    for(j=0;j<3;j++)
    {
        b=k+1;
        for(i=b;i<b+3;i++)
        {
            if(c[i]=='X')
            {
                printf(" \e[32m%c\e[0m ", c[i]);
            }
            else if(c[i]=='O')
            {
                printf(" \e[33m%c\e[0m ", c[i]);
            }
            else
            {
                printf(" %c ", c[i]);
            }
            k++;
        }
        printf("\n\n");
    }
}
void echo()
{
    char e[]="Rfij%G~%Pjyfs";
    for(int i=0;e[i];i++)
    {
        printf("\e[36m%c",e[i]-5);
    }
    printf("\e[0m\n\n");

}
