#include <iostream>
using namespace std;
void dichtrai(int a[][4], int c[][4])
{
    int b[4][4]={0};
    int y=0;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (a[i][j]!=0) {b[i][y]=a[i][j]; y++;}
        }
        y=0;
    }
    y=0;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (b[i][j]==0) {}
            else if (b[i][j]==b[i][j+1])
            {
                c[i][y]=b[i][j]+b[i][j+1]; b[i][j+1]=0; y++;
            }
            else {c[i][y]=b[i][j]; y++;}
        }
        y=0;
    }
}
void dichphai(int a[][4], int c[][4])
{
    int b[4][4]={0};
    int y=3;
    for (int i=3; i>=0; i--)
    {
        for (int j=3; j>=0; j--)
        {
            if (a[i][j]!=0) {b[i][y]=a[i][j]; y--;}
        }
        y=3;
    }
    y=3;
    for (int i=3; i>=0; i--)
    {
        for (int j=3; j>=0; j--)
        {
            if (b[i][j]==0) {}
            else if (b[i][j]==b[i][j-1])
            {
                c[i][y]=b[i][j]+b[i][j-1]; b[i][j-1]=0; y--;
            }
            else {c[i][y]=b[i][j]; y--;}
        }
        y=3;
    }
}
void dichtren(int a[][4], int c[][4])
{
    int b[4][4]={0};
    int y=0;
    for (int j=0; j<4; j++)
    {
        for (int i=0; i<4; i++)
        {
            if (a[i][j]!=0) {b[y][j]=a[i][j]; y++;}
        }
        y=0;
    }
    y=0;
    for (int j=0; j<4; j++)
    {
        for (int i=0; i<4; i++)
        {
            if (b[i][j]==0) {}
            else if (b[i][j]==b[i+1][j])
            {
                c[y][j]=b[i][j]+b[i+1][j]; b[i+1][j]=0; y++;
            }
            else {c[y][j]=b[i][j]; y++;}
        }
        y=0;
    }
}
void dichduoi(int a[][4], int c[][4])
{
    int b[4][4]={0};
    int y=3;
    for (int j=3; j>=0; j--)
    {
        for (int i=3; i>=0; i--)
        {
            if (a[i][j]!=0) {b[y][j]=a[i][j]; y--;}
        }
        y=3;
    }
    y=3;
    for (int j=3; j>=0; j--)
    {
        for (int i=3; i>=0; i--)
        {
            if (b[i][j]==0) {}
            else if (b[i][j]==b[i-1][j])
            {
                c[y][j]=b[i][j]+b[i-1][j]; b[i-1][j]=0; y--;
            }
            else {c[y][j]=b[i][j]; y--;}
        }
        y=3;
    }
}
int main()
{
    int a[4][4];
    int c[4][4]={0};
    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++) cin>>a[i][j];
    char x; cin>>x;
    if (x=='L') dichtrai(a,c);
    if (x=='R') dichphai(a,c);
    if (x=='U') dichtren(a,c);
    if (x=='D') dichduoi(a,c);
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        { cout<<c[i][j]<<" ";}
        cout<<endl;
    }
}
