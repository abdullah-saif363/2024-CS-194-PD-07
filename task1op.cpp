#include <iostream>
using namespace std;
int main()
{int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(int i=rows; i >=1;i -= 1 )
    {
        for(int j =i; j >=1;j -= 1){
        cout<<"*";
        }
        cout<<endl;

    }
}