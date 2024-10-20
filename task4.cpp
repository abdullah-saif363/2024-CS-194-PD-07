#include <iostream>
using namespace std;
int dots(int T);
main()
{int T,result;
cout<<"Enter number of triangle: ";
cin>>T;
result =  dots( T);
cout<<"Dots in the triangle: "<<result;
}
int dots(int T)
{int sum = 0;
    for (int i = 1; i <= T; i++)
    {
     sum = sum + i;
}
return sum;
}