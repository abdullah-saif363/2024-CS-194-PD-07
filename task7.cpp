#include <iostream>
using namespace std;
main()
{int days,patient;
int treated = 0,untreated =0,doctor = 7;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
    for(int x = 1;x <= days; x++)
    {
      cout<<"Number of patient who visited on hospital on Day "<<x <<":"; 
      cin>>patient;
      if (x%3 == 0 && untreated>treated)
      {
       doctor++;
      }
      if( patient<= 7)
      {
        treated += patient;
        untreated += 0;
      }
      if( patient > 7)
      {
        treated += doctor;
        untreated += (patient - doctor);
      }
     


    }
    cout<<"Treated patient: "<<treated<<endl;
    cout<<"Untreated patient: "<<untreated;

return 0;

}