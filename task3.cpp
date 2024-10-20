#include <iostream>
using namespace std;
void sequence(int num);
main()
{int num;
cout<<"Enter the number to amplify: ";
cin>>num;
sequence(num);

}
void sequence(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if(i%4 == 0)
        {cout<< i*10;}
        else{
        cout<<i;
        }
        if(i != num)
        cout<<",";
    }
}