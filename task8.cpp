#include <iostream>
#include <iomanip>
using namespace std;

main()
{int count = 0;
float tonnage,tonnage1=0,tonnage2=0,tonnage3=0,total=0,t1 = 0,t2 =0,t3 = 0;
cout<<"Enter the count of cargo for transportation : ";
cin>>count;

    for(int x = 1 ; x <= count; x++)
    {
        cout<<"Enter the tonnage of cargo "<<x<<" : ";
        cin>>tonnage;
        total += tonnage;
        if(tonnage <= 3)
        { 
        tonnage1 += tonnage*200;
        t1+= tonnage;
        }
        if(tonnage > 3 && tonnage <= 11)
        {
        tonnage2 += tonnage*175;
        t2+= tonnage;
        }
        if(tonnage > 11)
        {
        tonnage3 += tonnage*120;
        t3+= tonnage;
        }

        
        

    }
    float total1 = (t1/total)*100;
    float total2 = (t2/total)*100;
    float total3 = (t3/total)*100;
    float average = (tonnage1 + tonnage2 + tonnage3)/total;
    cout<<fixed<<setprecision(2);
    cout<<average<<endl<<total1<<"%"<<endl<<total2<<"%"<<endl<<total3<<"%";
    
}