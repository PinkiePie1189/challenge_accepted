#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
char mat[20][20];
char a[20];
char cobai;
void Draw(int snakex,int snakey)
{
    mat[snakex][snakey]='X';
    system("cls");
    printf("Salute %s\n",a);
    cobai=201+'0'-'0';
    cout<<cobai;
    cobai=205+'0'-'0';

    for(int i=1;i<=18;i++)
    {
        cout<<cobai<<cobai;
    }
    cout<<cobai<<cobai;
    cobai=187+'0'-'0';
    cout<<cobai;
    cout<<'\n';
    for(int i=0; i<20; i++)
    {
        cobai=186+'0'-'0';
        cout<<cobai;
        for(int j=1; j<20; j++)
        {
            printf("%c",mat[i][j]);
            printf(" ");
        }
        cout<<cobai;
        printf("\n");
    }

    cobai=200-'0'+'0';
    cout<<cobai;
    cobai=205+'0'-'0';
    for(int i=1;i<=18;i++)
    {
        cout<<cobai<<cobai;
    }
    cout<<cobai<<cobai;
    cobai=188;
    cout<<cobai;
}

int main()
{
    char t;
    for(int i=0;i<=256;i++)
    {
        t=i+'0'-'0';
        cout<<t<<" "<<i<<'\n';
    }
    printf("Introdu-ti numele aici\n");
    gets(a);

    int snakex=10,snakey=10;
    Draw(snakex,snakey);
    while(true)
    {
        char command;
        command=getch();
        if(command==72 && snakex>0)
        {
            mat[snakex][snakey]=0;
            snakex--;
        }
         if(command==80 && snakex<19)
        {
            mat[snakex][snakey]=0;
            snakex++;
        }
        if(command==77 && snakey<19)
        {
            mat[snakex][snakey]=0;
            snakey++;
        }
        if(command==75 && snakey>1)
        {
            mat[snakex][snakey]=0;
            snakey--;
        }

        Draw(snakex,snakey);
    }


}
