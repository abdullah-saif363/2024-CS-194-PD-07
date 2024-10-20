#include <iostream>
using namespace std;
void printupper(int rows);
void printlower(int rows);
int main()
{int rows;
cout<<"Enter the number of rows: ";
    cin>>rows;
printupper( rows);
printlower(rows);



}
void printupper(int rows){
    int j=0;
    rows = (rows/2);
    for(int i = 1; i <=rows ; i++ )
    {
       for(j=1; j <=(rows); j++)
       {
         if((j<=rows-i))
         {
            cout<<" ";
            }
        else
        {

            cout<<"*";
        
        }   
        }
    cout<<endl;
    }
}
void printlower(int rows){
    rows = (rows/2);
    for(int i = (rows);i>=1;i--)
    {
        for(int j=1; j<=(rows);j++)
        {
            if(j<=(rows-i))
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }



    
}
