#include <iostream>
using namespace std;
bool prime(int);
main()
{
    int num,result;
cout<<"Enter a number:  ";
cin>>num;
result = prime(num);
cout<<result;

}
bool prime(int num)
{
    if (num <= 1)
    return false;
    for(int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
         
          
    }
 return true;
}